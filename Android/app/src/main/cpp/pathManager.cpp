#include <jni.h>
#include <android/log.h>

#include "pathManager.h"

const char* inputDatabasePath;

extern "C" {

JNIEXPORT void JNICALL Java_ademar_cppstudy_PathManager_setInputDatabase(JNIEnv* env, jobject thiz, jstring path) {
    inputDatabasePath = env->GetStringUTFChars(path, 0);
}

}
