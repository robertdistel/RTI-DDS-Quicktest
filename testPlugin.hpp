

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from test.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef testPlugin_1147917702_h
#define testPlugin_1147917702_h

#include "test.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

/* The type used to store keys for instances of type struct
* AnotherSimple.
*
* By default, this type is struct Foo
* itself. However, if for some reason this choice is not practical for your
* system (e.g. if sizeof(struct Foo)
* is very large), you may redefine this typedef in terms of another type of
* your choosing. HOWEVER, if you define the KeyHolder type to be something
* other than struct AnotherSimple, the
* following restriction applies: the key of struct
* Foo must consist of a
* single field of your redefined KeyHolder type and that field must be the
* first field in struct Foo.
*/
typedef  class Foo FooKeyHolder;

#define FooPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define FooPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define FooPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define FooPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define FooPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

#define FooPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define FooPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Foo*
FooPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Foo*
FooPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Foo*
FooPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
FooPluginSupport_copy_data(
    Foo *out,
    const Foo *in);

NDDSUSERDllExport extern void 
FooPluginSupport_destroy_data_w_params(
    Foo *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
FooPluginSupport_destroy_data_ex(
    Foo *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
FooPluginSupport_destroy_data(
    Foo *sample);

NDDSUSERDllExport extern void 
FooPluginSupport_print_data(
    const Foo *sample,
    const char *desc,
    unsigned int indent);

NDDSUSERDllExport extern Foo*
FooPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Foo*
FooPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
FooPluginSupport_destroy_key_ex(
    FooKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
FooPluginSupport_destroy_key(
    FooKeyHolder *key);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
FooPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
FooPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
FooPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
FooPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
FooPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    Foo *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
FooPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Foo *out,
    const Foo *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
FooPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Foo *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FooPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Foo *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
FooPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const Foo *sample); 

NDDSUSERDllExport extern RTIBool 
FooPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Foo **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
FooPlugin_deserialize_from_cdr_buffer(
    Foo *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern RTIBool
FooPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
FooPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
FooPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
FooPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
FooPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Foo * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
FooPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
FooPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
FooPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
FooPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Foo *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FooPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Foo * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FooPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Foo ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
FooPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Foo *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FooPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    FooKeyHolder *key, 
    const Foo *instance);

NDDSUSERDllExport extern RTIBool 
FooPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    Foo *instance, 
    const FooKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
FooPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const Foo *instance);

NDDSUSERDllExport extern RTIBool 
FooPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
FooPlugin_new(void);

NDDSUSERDllExport extern void
FooPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
* AnotherSimple.
*
* By default, this type is struct MyType
* itself. However, if for some reason this choice is not practical for your
* system (e.g. if sizeof(struct MyType)
* is very large), you may redefine this typedef in terms of another type of
* your choosing. HOWEVER, if you define the KeyHolder type to be something
* other than struct AnotherSimple, the
* following restriction applies: the key of struct
* MyType must consist of a
* single field of your redefined KeyHolder type and that field must be the
* first field in struct MyType.
*/
typedef  class MyType MyTypeKeyHolder;

#define MyTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define MyTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define MyTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define MyTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define MyTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

#define MyTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define MyTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern MyType*
MyTypePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern MyType*
MyTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern MyType*
MyTypePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
MyTypePluginSupport_copy_data(
    MyType *out,
    const MyType *in);

NDDSUSERDllExport extern void 
MyTypePluginSupport_destroy_data_w_params(
    MyType *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
MyTypePluginSupport_destroy_data_ex(
    MyType *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
MyTypePluginSupport_destroy_data(
    MyType *sample);

NDDSUSERDllExport extern void 
MyTypePluginSupport_print_data(
    const MyType *sample,
    const char *desc,
    unsigned int indent);

NDDSUSERDllExport extern MyType*
MyTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern MyType*
MyTypePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
MyTypePluginSupport_destroy_key_ex(
    MyTypeKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
MyTypePluginSupport_destroy_key(
    MyTypeKeyHolder *key);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
MyTypePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
MyTypePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
MyTypePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
MyTypePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
MyTypePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    MyType *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
MyTypePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    MyType *out,
    const MyType *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
MyTypePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const MyType *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MyTypePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    MyType *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
MyTypePlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const MyType *sample); 

NDDSUSERDllExport extern RTIBool 
MyTypePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    MyType **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
MyTypePlugin_deserialize_from_cdr_buffer(
    MyType *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern RTIBool
MyTypePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
MyTypePlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
MyTypePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
MyTypePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
MyTypePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const MyType * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
MyTypePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
MyTypePlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
MyTypePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
MyTypePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const MyType *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MyTypePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    MyType * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MyTypePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    MyType ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
MyTypePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    MyType *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MyTypePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    MyTypeKeyHolder *key, 
    const MyType *instance);

NDDSUSERDllExport extern RTIBool 
MyTypePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    MyType *instance, 
    const MyTypeKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
MyTypePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const MyType *instance);

NDDSUSERDllExport extern RTIBool 
MyTypePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
MyTypePlugin_new(void);

NDDSUSERDllExport extern void
MyTypePlugin_delete(struct PRESTypePlugin *);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* testPlugin_1147917702_h */

