// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from constants.djinni

package com.dropbox.djinni.test;

import java.util.concurrent.atomic.AtomicBoolean;
import javax.annotation.CheckForNull;
import javax.annotation.Nonnull;

/** Interface containing constants */
public interface ConstantsInterface {
    boolean BOOL_CONSTANT = true;

    byte I8_CONSTANT = 1;

    short I16_CONSTANT = 2;

    /** i32_constant has documentation. */
    int I32_CONSTANT = 3;

    /**
     * i64_constant has long documentation.
     * (Second line of multi-line documentation.
     *   Indented third line of multi-line documentation.)
     */
    long I64_CONSTANT = 4l;

    float F32_CONSTANT = 5.0f;

    double F64_CONSTANT = 5.0;

    @CheckForNull
    Boolean OPT_BOOL_CONSTANT = true;

    @CheckForNull
    Byte OPT_I8_CONSTANT = 1;

    /** opt_i16_constant has documentation. */
    @CheckForNull
    Short OPT_I16_CONSTANT = 2;

    @CheckForNull
    Integer OPT_I32_CONSTANT = 3;

    @CheckForNull
    Long OPT_I64_CONSTANT = 4l;

    /**
     * opt_f32_constant has long documentation.
     * (Second line of multi-line documentation.
     *   Indented third line of multi-line documentation.)
     */
    @CheckForNull
    Float OPT_F32_CONSTANT = 5.0f;

    @CheckForNull
    Double OPT_F64_CONSTANT = 5.0;

    @Nonnull
    String STRING_CONSTANT = "string-constant";

    @CheckForNull
    String OPT_STRING_CONSTANT = "string-constant";

    @Nonnull
    ConstantRecord OBJECT_CONSTANT = new ConstantRecord(
        I32_CONSTANT /* mSomeInteger */ ,
        STRING_CONSTANT /* mSomeString */ );

    /**
     * No support for null optional constants
     * No support for optional constant records
     * No support for constant binary, list, set, map
     */
    public void dummy();

    static final class CppProxy implements ConstantsInterface
    {
        private final long nativeRef;
        private final AtomicBoolean destroyed = new AtomicBoolean(false);

        private CppProxy(long nativeRef)
        {
            if (nativeRef == 0) throw new RuntimeException("nativeRef is zero");
            this.nativeRef = nativeRef;
        }

        private native void nativeDestroy(long nativeRef);
        public void _djinni_private_destroy()
        {
            boolean destroyed = this.destroyed.getAndSet(true);
            if (!destroyed) nativeDestroy(this.nativeRef);
        }
        protected void finalize() throws java.lang.Throwable
        {
            _djinni_private_destroy();
            super.finalize();
        }

        @Override
        public void dummy()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_dummy(this.nativeRef);
        }
        private native void native_dummy(long _nativeRef);
    }
}