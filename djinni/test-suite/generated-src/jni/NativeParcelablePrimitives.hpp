// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from parcelable.djinni

#pragma once

#include "djinni_support.hpp"
#include "parcelable_primitives.hpp"

namespace djinni_generated {

class NativeParcelablePrimitives final {
public:
    using CppType = ::testsuite::ParcelablePrimitives;
    using JniType = jobject;

    using Boxed = NativeParcelablePrimitives;

    ~NativeParcelablePrimitives();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeParcelablePrimitives();
    friend ::djinni::JniClass<NativeParcelablePrimitives>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/dropbox/djinni/test/ParcelablePrimitives") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(ZBSIJFDLjava/lang/String;Ljava/util/Date;Ljava/lang/Boolean;Ljava/lang/Byte;Ljava/lang/Short;Ljava/lang/Integer;Ljava/lang/Long;Ljava/lang/Float;Ljava/lang/Double;Ljava/lang/String;Ljava/util/Date;)V") };
    const jfieldID field_mB { ::djinni::jniGetFieldID(clazz.get(), "mB", "Z") };
    const jfieldID field_mEight { ::djinni::jniGetFieldID(clazz.get(), "mEight", "B") };
    const jfieldID field_mSixteen { ::djinni::jniGetFieldID(clazz.get(), "mSixteen", "S") };
    const jfieldID field_mThirtytwo { ::djinni::jniGetFieldID(clazz.get(), "mThirtytwo", "I") };
    const jfieldID field_mSixtyfour { ::djinni::jniGetFieldID(clazz.get(), "mSixtyfour", "J") };
    const jfieldID field_mFthirtytwo { ::djinni::jniGetFieldID(clazz.get(), "mFthirtytwo", "F") };
    const jfieldID field_mFsixtyfour { ::djinni::jniGetFieldID(clazz.get(), "mFsixtyfour", "D") };
    const jfieldID field_mS { ::djinni::jniGetFieldID(clazz.get(), "mS", "Ljava/lang/String;") };
    const jfieldID field_mD { ::djinni::jniGetFieldID(clazz.get(), "mD", "Ljava/util/Date;") };
    const jfieldID field_mOB { ::djinni::jniGetFieldID(clazz.get(), "mOB", "Ljava/lang/Boolean;") };
    const jfieldID field_mOEight { ::djinni::jniGetFieldID(clazz.get(), "mOEight", "Ljava/lang/Byte;") };
    const jfieldID field_mOSixteen { ::djinni::jniGetFieldID(clazz.get(), "mOSixteen", "Ljava/lang/Short;") };
    const jfieldID field_mOThirtytwo { ::djinni::jniGetFieldID(clazz.get(), "mOThirtytwo", "Ljava/lang/Integer;") };
    const jfieldID field_mOSixtyfour { ::djinni::jniGetFieldID(clazz.get(), "mOSixtyfour", "Ljava/lang/Long;") };
    const jfieldID field_mOFthirtytwo { ::djinni::jniGetFieldID(clazz.get(), "mOFthirtytwo", "Ljava/lang/Float;") };
    const jfieldID field_mOFsixtyfour { ::djinni::jniGetFieldID(clazz.get(), "mOFsixtyfour", "Ljava/lang/Double;") };
    const jfieldID field_mOS { ::djinni::jniGetFieldID(clazz.get(), "mOS", "Ljava/lang/String;") };
    const jfieldID field_mOD { ::djinni::jniGetFieldID(clazz.get(), "mOD", "Ljava/util/Date;") };
};

}  // namespace djinni_generated
