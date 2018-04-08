

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from test.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef test_1147917702_hpp
#define test_1147917702_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/Optional.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/core/array.hpp"
#include "rti/core/BoundedSequence.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#include "rti/core/LongDouble.hpp"
#include "dds/core/External.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/topic/TopicTraits.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

class NDDSUSERDllExport Foo {

  public:
    Foo();
    Foo(
        int32_t x,
        int32_t y);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    Foo (Foo&&) = default;
    Foo& operator=(Foo&&) = default;
    Foo& operator=(const Foo&) = default;
    Foo(const Foo&) = default;
    #else
    Foo(Foo&& other_) OMG_NOEXCEPT;  
    Foo& operator=(Foo&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    int32_t& x() OMG_NOEXCEPT; 
    const int32_t& x() const OMG_NOEXCEPT;
    void x(int32_t value);

    int32_t& y() OMG_NOEXCEPT; 
    const int32_t& y() const OMG_NOEXCEPT;
    void y(int32_t value);

    bool operator == (const Foo& other_) const;
    bool operator != (const Foo& other_) const;

    void swap(Foo& other_) OMG_NOEXCEPT ;

  private:

    int32_t m_x_;
    int32_t m_y_;

};

inline void swap(Foo& a, Foo& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const Foo& sample);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
// On Windows, dll-export template instantiations of standard types used by
// other dll-exported types
template class NDDSUSERDllExport std::allocator<int32_t>;
template class NDDSUSERDllExport std::vector<int32_t >;
#endif
class NDDSUSERDllExport MyType {

  public:
    MyType();
    MyType(
        int32_t my_long,
        const std::string& my_string,
        const Foo& my_foo,
        const std::vector<int32_t>& my_sequence,
        const dds::core::array<Foo, 5>& my_array,
        const dds::core::optional<Foo>& my_optional);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    MyType (MyType&&) = default;
    MyType& operator=(MyType&&) = default;
    MyType& operator=(const MyType&) = default;
    MyType(const MyType&) = default;
    #else
    MyType(MyType&& other_) OMG_NOEXCEPT;  
    MyType& operator=(MyType&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    int32_t& my_long() OMG_NOEXCEPT; 
    const int32_t& my_long() const OMG_NOEXCEPT;
    void my_long(int32_t value);

    std::string& my_string() OMG_NOEXCEPT; 
    const std::string& my_string() const OMG_NOEXCEPT;
    void my_string(const std::string& value);

    Foo& my_foo() OMG_NOEXCEPT; 
    const Foo& my_foo() const OMG_NOEXCEPT;
    void my_foo(const Foo& value);

    std::vector<int32_t>& my_sequence() OMG_NOEXCEPT; 
    const std::vector<int32_t>& my_sequence() const OMG_NOEXCEPT;
    void my_sequence(const std::vector<int32_t>& value);

    dds::core::array<Foo, 5>& my_array() OMG_NOEXCEPT; 
    const dds::core::array<Foo, 5>& my_array() const OMG_NOEXCEPT;
    void my_array(const dds::core::array<Foo, 5>& value);

    dds::core::optional<Foo>& my_optional() OMG_NOEXCEPT; 
    const dds::core::optional<Foo>& my_optional() const OMG_NOEXCEPT;
    void my_optional(const dds::core::optional<Foo>& value);

    bool operator == (const MyType& other_) const;
    bool operator != (const MyType& other_) const;

    void swap(MyType& other_) OMG_NOEXCEPT ;

  private:

    int32_t m_my_long_;
    std::string m_my_string_;
    Foo m_my_foo_;
    std::vector<int32_t> m_my_sequence_;
    dds::core::array<Foo, 5> m_my_array_;
    dds::core::optional<Foo> m_my_optional_;

};

inline void swap(MyType& a, MyType& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const MyType& sample);

namespace dds { 
    namespace topic {

        template<>
        struct topic_type_name<Foo> {
            NDDSUSERDllExport static std::string value() {
                return "Foo";
            }
        };

        template<>
        struct is_topic_type<Foo> : public dds::core::true_type {};

        template<>
        struct topic_type_support<Foo> {
            NDDSUSERDllExport 
            static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const Foo& sample);

            NDDSUSERDllExport 
            static void from_cdr_buffer(Foo& sample, const std::vector<char>& buffer);

            NDDSUSERDllExport 
            static void reset_sample(Foo& sample);

            NDDSUSERDllExport 
            static void allocate_sample(Foo& sample, int, int);

            static const rti::topic::TypePluginKind::type type_plugin_kind = 
            rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name<MyType> {
            NDDSUSERDllExport static std::string value() {
                return "MyType";
            }
        };

        template<>
        struct is_topic_type<MyType> : public dds::core::true_type {};

        template<>
        struct topic_type_support<MyType> {
            NDDSUSERDllExport 
            static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const MyType& sample);

            NDDSUSERDllExport 
            static void from_cdr_buffer(MyType& sample, const std::vector<char>& buffer);

            NDDSUSERDllExport 
            static void reset_sample(MyType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(MyType& sample, int, int);

            static const rti::topic::TypePluginKind::type type_plugin_kind = 
            rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {
        template<>
        struct dynamic_type<Foo> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility<Foo> {
            static const dds::core::xtypes::ExtensibilityKind::type kind =
            dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        template<>
        struct dynamic_type<MyType> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility<MyType> {
            static const dds::core::xtypes::ExtensibilityKind::type kind =
            dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // test_1147917702_hpp

