LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_SRC_FILES := main.c
#LOCAL_SHARED_LIBRARIES := liblog
LOCAL_MODULE := dlopener

include $(BUILD_EXECUTABLE)

