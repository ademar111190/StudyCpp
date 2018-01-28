#include <iostream>

#include "AndroidContinentsView.h"

AndroidContinentsView::AndroidContinentsView(jobject thiz) {
    this->thiz = thiz;
}

AndroidContinentsView::~AndroidContinentsView() {
    this->thiz = nullptr;
}

void AndroidContinentsView::showLoading() {
    log.d("showLoading\n");
}

void AndroidContinentsView::showRetry() {
    log.d("showRetry\n");
}

void AndroidContinentsView::showContent() {
    log.d("showContent\n");
}

void AndroidContinentsView::showError(string message) {
    log.d("showError: %s\n", message.c_str());
}

void AndroidContinentsView::clearContinents() {
    log.d("clearContinents\n");
}

void AndroidContinentsView::bindContinent(Continent continent) {
    log.d("bindContinent\n");
}
