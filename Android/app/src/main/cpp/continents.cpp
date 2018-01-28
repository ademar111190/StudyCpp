#include <jni.h>

#include "ContinentsPresenter.h"
#include "AndroidContinentsView.h"

extern "C" {

LogUseCase log;
ContinentsPresenter presenter;
AndroidContinentsView* view;

JNIEXPORT void JNICALL Java_ademar_cppstudy_ContinentsActivity_attachView(JNIEnv* env, jobject thiz) {
    log.d("attachView\n");
    view = new AndroidContinentsView(thiz);
    presenter.attachView(view);
}

JNIEXPORT void JNICALL Java_ademar_cppstudy_ContinentsActivity_start(JNIEnv* env, jobject thiz) {
    log.d("start\n");
    fprintf(stderr, "Aqui 2\n");
    presenter.start();
}

JNIEXPORT void JNICALL Java_ademar_cppstudy_ContinentsActivity_destroy(JNIEnv* env, jobject thiz) {
    log.d("destroy\n");
    view = nullptr;
}

}
