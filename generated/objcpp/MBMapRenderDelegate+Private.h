// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from Map.djinni

#include "map_render_delegate.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol MBMapRenderDelegate;

namespace djinni_generated {

class MapRenderDelegate
{
public:
    using CppType = std::shared_ptr<::MapRenderDelegate>;
    using CppOptType = std::shared_ptr<::MapRenderDelegate>;
    using ObjcType = id<MBMapRenderDelegate>;

    using Boxed = MapRenderDelegate;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated
