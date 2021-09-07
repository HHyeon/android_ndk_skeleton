
LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := jnitestworker
LOCAL_SRC_FILES := jni_binder.cpp cpp_source.cpp
LOCAL_LDLIBS := -llog

include $(BUILD_SHARED_LIBRARY)
