
#include <jni.h>
#include "global.h"


extern void test_function_jni_side();

static JNINativeMethod native_methods[] = {
        {"jni_side_test_function", "()V", (void*)test_function_jni_side},
};



jint JNI_OnLoad(JavaVM *vm, void *reserved) {
    JNIEnv *env = NULL;
    if (vm->GetEnv((void **) &env, JNI_VERSION_1_6) != JNI_OK) {
        LOGE("Could not retrieve JNIEnv");
        return 0;
    }

    jclass klass = (*env).FindClass("com/example/jni_tests/MainActivity");
    (*env).RegisterNatives(klass,native_methods,sizeof(native_methods)/sizeof(native_methods[0]));

    LOGD("JNI_OnLoad Successed returned");
    return JNI_VERSION_1_6;
}