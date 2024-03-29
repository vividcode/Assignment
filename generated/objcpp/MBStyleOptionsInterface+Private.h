// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from Map.djinni

#include "style_options_interface.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class MBStyleOptionsInterface;

namespace djinni_generated {

class StyleOptionsInterface
{
public:
    using CppType = std::shared_ptr<::StyleOptionsInterface>;
    using CppOptType = std::shared_ptr<::StyleOptionsInterface>;
    using ObjcType = MBStyleOptionsInterface*;

    using Boxed = StyleOptionsInterface;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

