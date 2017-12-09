#include <iostream>

#include "GetContinentsUseCase.h"
#include "ContinentsPresenter.h"

#include "UnixContinentsView.h"

using namespace std;

int main(int argc, char const* argv[]) {
    GetContinentsUseCase getContinentsUseCase = GetContinentsUseCase();
    vector<Continent> continents = getContinentsUseCase.execute();
    fprintf(stderr, "We have %lu continents\n", continents.size());
    for (auto& continent : continents) {
        fprintf(stderr, "Continent id: %d name: %s\n", continent.id, continent.name.c_str());
    }
    UnixContinentsView* view = new UnixContinentsView();
    ContinentsPresenter presenter;
    presenter.start();
    presenter.attachView(view);
    presenter.start();
    return 0;
}
