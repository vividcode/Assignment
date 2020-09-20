// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from Map.djinni

#include "style_interface.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class MBStyleInterface;

namespace djinni_generated {

class StyleInterface
{
public:
    using CppType = std::shared_ptr<::StyleInterface>;
    using CppOptType = std::shared_ptr<::StyleInterface>;
    using ObjcType = MBStyleInterface*;

    using Boxed = StyleInterface;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated
