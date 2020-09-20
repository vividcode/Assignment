// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from Map.djinni

#import "MBMapInterface+Private.h"
#import "MBMapInterface.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "MBMapRenderDelegate+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface MBMapInterface ()

- (id)initWithCpp:(const std::shared_ptr<::MapInterface>&)cppRef;

@end

@implementation MBMapInterface {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::MapInterface>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::MapInterface>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

+ (nullable MBMapInterface *)createStyle:(nullable id<MBMapRenderDelegate>)delegate {
    try {
        auto objcpp_result_ = ::MapInterface::createStyle(::djinni_generated::MapRenderDelegate::toCpp(delegate));
        return ::djinni_generated::MapInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)render {
    try {
        _cppRefHandle.get()->render();
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto MapInterface::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto MapInterface::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<MBMapInterface>(cpp);
}

}  // namespace djinni_generated

@end
