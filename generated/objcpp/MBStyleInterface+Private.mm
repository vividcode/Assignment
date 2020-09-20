// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from Map.djinni

#import "MBStyleInterface+Private.h"
#import "MBStyleInterface.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "MBStyleOptionsInterface+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface MBStyleInterface ()

- (id)initWithCpp:(const std::shared_ptr<::StyleInterface>&)cppRef;

@end

@implementation MBStyleInterface {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::StyleInterface>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::StyleInterface>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

+ (nullable MBStyleInterface *)createStyle:(nullable MBStyleOptionsInterface *)options {
    try {
        auto objcpp_result_ = ::StyleInterface::createStyle(::djinni::Optional<std::experimental::optional, ::djinni_generated::StyleOptionsInterface>::toCpp(options));
        return ::djinni_generated::StyleInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (BOOL)isValid {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->isValid();
        return ::djinni::Bool::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto StyleInterface::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto StyleInterface::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<MBStyleInterface>(cpp);
}

}  // namespace djinni_generated

@end