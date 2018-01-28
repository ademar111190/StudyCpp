#include "ContinentsPresenter.h"

using namespace std;

ContinentsPresenter::ContinentsPresenter() {}

ContinentsPresenter::~ContinentsPresenter() {}

void ContinentsPresenter::attachView(ContinentsView* view) {
    this->view = view;
}

void ContinentsPresenter::start() {
    log.d("Aqui 1\n");
    if (view) {
        view->showLoading();
        view->clearContinents();
        vector<Continent> continents = getContinents.execute();
        for (auto& continent:continents) {
            view->bindContinent(continent);
        }
        view->showContent();
    }
}
