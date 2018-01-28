#include <iostream>

#include "UnixContinentsView.h"

void UnixContinentsView::showLoading() {
    log.d("showLoading\n");
}

void UnixContinentsView::showRetry() {
    log.d("showRetry\n");
}

void UnixContinentsView::showContent() {
    log.d("showContent\n");
}

void UnixContinentsView::showError(string message) {
    log.d("showError: %s\n", message.c_str());
}

void UnixContinentsView::clearContinents() {
    log.d("clearContinents\n");
}

void UnixContinentsView::bindContinent(Continent continent) {
    log.d("bindContinent\n");
}
