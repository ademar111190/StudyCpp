#include <iostream>

#include "UnixContinentsView.h"

void UnixContinentsView::showLoading() {
    fprintf(stderr, "showLoading\n");
}

void UnixContinentsView::showRetry() {
    fprintf(stderr, "showRetry\n");
}

void UnixContinentsView::showContent() {
    fprintf(stderr, "showContent\n");
}

void UnixContinentsView::showError(string message) {
    fprintf(stderr, "showError: %s\n", message.c_str());
}

void UnixContinentsView::clearContinents() {
    fprintf(stderr, "clearContinents\n");
}

void UnixContinentsView::bindContinent(Continent continent) {
    fprintf(stderr, "bindContinent\n");
}
