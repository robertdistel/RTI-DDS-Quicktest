/* test_publisher.cxx

A publication of data of type MyType

This file is derived from code automatically generated by the rtiddsgen 
command:

rtiddsgen -language C++11 -example <arch> test.idl

Example publication of type MyType automatically generated by 
'rtiddsgen'. To test them follow these steps:

(1) Compile this file and the example subscription.

(2) Start the subscription on the same domain used for RTI Data Distribution
Service with the command
objs/<arch>/test_subscriber <domain_id> <sample_count>

(3) Start the publication on the same domain used for RTI Data Distribution
Service with the command
objs/<arch>/test_publisher <domain_id> <sample_count>

(4) [Optional] Specify the list of discovery initial peers and 
multicast receive addresses via an environment variable or a file 
(in the current working directory) called NDDS_DISCOVERY_PEERS. 

You can run any number of publishers and subscribers programs, and can 
add and remove them dynamically from the domain.

Example:

To run the example application on domain <domain_id>:

On Unix: 

objs/<arch>/test_publisher <domain_id> 
objs/<arch>/test_subscriber <domain_id> 

On Windows:

objs\<arch>\test_publisher <domain_id>  
objs\<arch>\test_subscriber <domain_id>   
 */

#include <iostream>
#include <string>

#include <dds/pub/ddspub.hpp>
#include <rti/util/util.hpp> // for sleep()

#include "test.hpp"

void publisher_main(int domain_id, int sample_count)
{
	// Create a DomainParticipant with default Qos
	dds::domain::DomainParticipant participant (domain_id);

	// Create a Topic -- and automatically register the type
	std::vector<dds::topic::Topic<MyType> * > topic(sample_count,nullptr);
	std::vector<dds::pub::DataWriter<MyType> * > writer(sample_count,nullptr);
	for (int i=0; i< sample_count; i++)
	{
		std::string topicName(std::string("Example MyType") + std::to_string(i));

		topic[i] = new dds::topic::Topic<MyType> (participant, topicName);
		// Create a DataWriter with default Qos (Publisher created in-line)
		writer[i] = new dds::pub::DataWriter<MyType>(dds::pub::Publisher(participant), *topic[i]);
	}


	MyType sample;
	Foo foo;
	int loop=0;

	do
	{

		for (int count = 0; count < sample_count || sample_count == 0; count++) {
			// Modify the data to be written here
			sample.my_long(count);
			sample.my_string("ABCDEF");
			foo.x(loop);
			foo.y(-loop);
			sample.my_foo(foo);
			sample.my_sequence(std::vector<int>(100,count));


			auto name = writer[count]->topic().name();


			std::cout << "Writing " << name << " count " << count << std::endl;
			writer[count]->write(sample);

			rti::util::sleep(dds::core::Duration::from_secs(0.2));
		}
		loop+=1;
	}
	while(true);
}

int main(int argc, char *argv[])
{

	int domain_id = 0;
	int sample_count = 0; // infinite loop

	if (argc >= 2) {
		domain_id = atoi(argv[1]);
	}
	if (argc >= 3) {
		sample_count = atoi(argv[2]);
	}

	// To turn on additional logging, include <rti/config/Logger.hpp> and
	// uncomment the following line:
	// rti::config::Logger::instance().verbosity(rti::config::Verbosity::STATUS_ALL);

	try {
		publisher_main(domain_id, sample_count);
	} catch (const std::exception& ex) {
		// This will catch DDS exceptions
		std::cerr << "Exception in publisher_main(): " << ex.what() << std::endl;
		return -1;
	}

	// RTI Connext provides a finalize_participant_factory() method
	// if you want to release memory used by the participant factory singleton.
	// Uncomment the following line to release the singleton:
	//
	// dds::domain::DomainParticipant::finalize_participant_factory();

	return 0;
}
