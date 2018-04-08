

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from test.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "test.hpp"
#include "testPlugin.hpp"

#include <rti/util/ostream_operators.hpp>

// ---- Foo: 

Foo::Foo() :
    m_x_ (0) ,
    m_y_ (0)  {
}   

Foo::Foo (
    int32_t x,
    int32_t y)
    :
        m_x_( x ),
        m_y_( y ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
Foo::Foo(Foo&& other_) OMG_NOEXCEPT  :m_x_ (std::move(other_.m_x_))
,
m_y_ (std::move(other_.m_y_))
{
} 

Foo& Foo::operator=(Foo&&  other_) OMG_NOEXCEPT {
    Foo tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void Foo::swap(Foo& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_x_, other_.m_x_);
    swap(m_y_, other_.m_y_);
}  

bool Foo::operator == (const Foo& other_) const {
    if (m_x_ != other_.m_x_) {
        return false;
    }
    if (m_y_ != other_.m_y_) {
        return false;
    }
    return true;
}
bool Foo::operator != (const Foo& other_) const {
    return !this->operator ==(other_);
}

// --- Getters and Setters: -------------------------------------------------
int32_t& Foo::x() OMG_NOEXCEPT {
    return m_x_;
}

const int32_t& Foo::x() const OMG_NOEXCEPT {
    return m_x_;
}

void Foo::x(int32_t value) {
    m_x_ = value;
}

int32_t& Foo::y() OMG_NOEXCEPT {
    return m_y_;
}

const int32_t& Foo::y() const OMG_NOEXCEPT {
    return m_y_;
}

void Foo::y(int32_t value) {
    m_y_ = value;
}

std::ostream& operator << (std::ostream& o,const Foo& sample)
{
    rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "x: " << sample.x()<<", ";
    o << "y: " << sample.y() ;
    o <<"]";
    return o;
}

// ---- MyType: 

MyType::MyType() :
    m_my_long_ (0)  {
}   

MyType::MyType (
    int32_t my_long,
    const std::string& my_string,
    const Foo& my_foo,
    const std::vector<int32_t>& my_sequence,
    const dds::core::array<Foo, 5>& my_array,
    const dds::core::optional<Foo>& my_optional)
    :
        m_my_long_( my_long ),
        m_my_string_( my_string ),
        m_my_foo_( my_foo ),
        m_my_sequence_( my_sequence ),
        m_my_array_( my_array ),
        m_my_optional_( my_optional ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
MyType::MyType(MyType&& other_) OMG_NOEXCEPT  :m_my_long_ (std::move(other_.m_my_long_))
,
m_my_string_ (std::move(other_.m_my_string_))
,
m_my_foo_ (std::move(other_.m_my_foo_))
,
m_my_sequence_ (std::move(other_.m_my_sequence_))
,
m_my_array_ (std::move(other_.m_my_array_))
,
m_my_optional_ (std::move(other_.m_my_optional_))
{
} 

MyType& MyType::operator=(MyType&&  other_) OMG_NOEXCEPT {
    MyType tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void MyType::swap(MyType& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_my_long_, other_.m_my_long_);
    swap(m_my_string_, other_.m_my_string_);
    swap(m_my_foo_, other_.m_my_foo_);
    swap(m_my_sequence_, other_.m_my_sequence_);
    swap(m_my_array_, other_.m_my_array_);
    swap(m_my_optional_, other_.m_my_optional_);
}  

bool MyType::operator == (const MyType& other_) const {
    if (m_my_long_ != other_.m_my_long_) {
        return false;
    }
    if (m_my_string_ != other_.m_my_string_) {
        return false;
    }
    if (m_my_foo_ != other_.m_my_foo_) {
        return false;
    }
    if (m_my_sequence_ != other_.m_my_sequence_) {
        return false;
    }
    if (m_my_array_ != other_.m_my_array_) {
        return false;
    }
    if (m_my_optional_ != other_.m_my_optional_) {
        return false;
    }
    return true;
}
bool MyType::operator != (const MyType& other_) const {
    return !this->operator ==(other_);
}

// --- Getters and Setters: -------------------------------------------------
int32_t& MyType::my_long() OMG_NOEXCEPT {
    return m_my_long_;
}

const int32_t& MyType::my_long() const OMG_NOEXCEPT {
    return m_my_long_;
}

void MyType::my_long(int32_t value) {
    m_my_long_ = value;
}

std::string& MyType::my_string() OMG_NOEXCEPT {
    return m_my_string_;
}

const std::string& MyType::my_string() const OMG_NOEXCEPT {
    return m_my_string_;
}

void MyType::my_string(const std::string& value) {
    m_my_string_ = value;
}

Foo& MyType::my_foo() OMG_NOEXCEPT {
    return m_my_foo_;
}

const Foo& MyType::my_foo() const OMG_NOEXCEPT {
    return m_my_foo_;
}

void MyType::my_foo(const Foo& value) {
    m_my_foo_ = value;
}

std::vector<int32_t>& MyType::my_sequence() OMG_NOEXCEPT {
    return m_my_sequence_;
}

const std::vector<int32_t>& MyType::my_sequence() const OMG_NOEXCEPT {
    return m_my_sequence_;
}

void MyType::my_sequence(const std::vector<int32_t>& value) {
    m_my_sequence_ = value;
}

dds::core::array<Foo, 5>& MyType::my_array() OMG_NOEXCEPT {
    return m_my_array_;
}

const dds::core::array<Foo, 5>& MyType::my_array() const OMG_NOEXCEPT {
    return m_my_array_;
}

void MyType::my_array(const dds::core::array<Foo, 5>& value) {
    m_my_array_ = value;
}

dds::core::optional<Foo>& MyType::my_optional() OMG_NOEXCEPT {
    return m_my_optional_;
}

const dds::core::optional<Foo>& MyType::my_optional() const OMG_NOEXCEPT {
    return m_my_optional_;
}

void MyType::my_optional(const dds::core::optional<Foo>& value) {
    m_my_optional_ = value;
}

std::ostream& operator << (std::ostream& o,const MyType& sample)
{
    rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "my_long: " << sample.my_long()<<", ";
    o << "my_string: " << sample.my_string()<<", ";
    o << "my_foo: " << sample.my_foo()<<", ";
    o << "my_sequence: " << sample.my_sequence()<<", ";
    o << "my_array: " << sample.my_array()<<", ";
    o << "my_optional: " << sample.my_optional() ;
    o <<"]";
    return o;
}

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        template<>
        struct native_type_code<Foo> {
            static DDS_TypeCode * get()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Foo_g_tc_members[2]=
                {

                    {
                        (char *)"x",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"y",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode Foo_g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"Foo", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        Foo_g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Foo*/

                if (is_initialized) {
                    return &Foo_g_tc;
                }

                Foo_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                Foo_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                is_initialized = RTI_TRUE;

                return &Foo_g_tc;
            }
        }; // native_type_code

        const dds::core::xtypes::StructType& dynamic_type<Foo>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(native_type_code<Foo>::get())));
        }

        template<>
        struct native_type_code<MyType> {
            static DDS_TypeCode * get()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode MyType_g_tc_my_string_string = DDS_INITIALIZE_STRING_TYPECODE((512));
                static DDS_TypeCode MyType_g_tc_my_sequence_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode MyType_g_tc_my_array_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,5, NULL,NULL);
                static DDS_TypeCode_Member MyType_g_tc_members[6]=
                {

                    {
                        (char *)"my_long",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"my_string",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"my_foo",/* Member name */
                        {
                            2,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"my_sequence",/* Member name */
                        {
                            3,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"my_array",/* Member name */
                        {
                            4,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"my_optional",/* Member name */
                        {
                            5,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode MyType_g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"MyType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        MyType_g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for MyType*/

                if (is_initialized) {
                    return &MyType_g_tc;
                }

                MyType_g_tc_my_sequence_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                MyType_g_tc_my_array_array._data._typeCode =(RTICdrTypeCode *)&rti::topic::dynamic_type< Foo>::get().native();

                MyType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                MyType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&MyType_g_tc_my_string_string;

                MyType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&rti::topic::dynamic_type< Foo>::get().native();

                MyType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& MyType_g_tc_my_sequence_sequence;
                MyType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)& MyType_g_tc_my_array_array;
                MyType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&rti::topic::dynamic_type< Foo>::get().native();

                is_initialized = RTI_TRUE;

                return &MyType_g_tc;
            }
        }; // native_type_code

        const dds::core::xtypes::StructType& dynamic_type<MyType>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(native_type_code<MyType>::get())));
        }

    }
}  

namespace dds { 
    namespace topic {
        void topic_type_support<Foo>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            rti::domain::register_type_plugin(
                participant,
                type_name,
                FooPlugin_new,
                FooPlugin_delete);
        }

        std::vector<char>& topic_type_support<Foo>::to_cdr_buffer(
            std::vector<char>& buffer, const Foo& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = FooPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = FooPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<Foo>::from_cdr_buffer(Foo& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = FooPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create Foo from cdr buffer");
        }

        void topic_type_support<Foo>::reset_sample(Foo& sample) 
        {
            rti::topic::reset_sample(sample.x());
            rti::topic::reset_sample(sample.y());
        }

        void topic_type_support<Foo>::allocate_sample(Foo& sample, int, int) 
        {
        }

        void topic_type_support<MyType>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            rti::domain::register_type_plugin(
                participant,
                type_name,
                MyTypePlugin_new,
                MyTypePlugin_delete);
        }

        std::vector<char>& topic_type_support<MyType>::to_cdr_buffer(
            std::vector<char>& buffer, const MyType& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = MyTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = MyTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<MyType>::from_cdr_buffer(MyType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = MyTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create MyType from cdr buffer");
        }

        void topic_type_support<MyType>::reset_sample(MyType& sample) 
        {
            rti::topic::reset_sample(sample.my_long());
            rti::topic::reset_sample(sample.my_string());
            rti::topic::reset_sample(sample.my_foo());
            rti::topic::reset_sample(sample.my_sequence());
            rti::topic::reset_sample(sample.my_array());
            rti::topic::reset_sample(sample.my_optional());
        }

        void topic_type_support<MyType>::allocate_sample(MyType& sample, int, int) 
        {
            rti::topic::allocate_sample(sample.my_string(),  -1, 512);
            rti::topic::allocate_sample(sample.my_foo(),  -1, -1);
            rti::topic::allocate_sample(sample.my_sequence(),  -1, -1);
            rti::topic::allocate_sample(sample.my_array(),  -1, -1);
        }

    }
}  

