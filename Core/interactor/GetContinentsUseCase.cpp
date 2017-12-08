#include "GetContinentsUseCase.h"

using namespace std;

GetContinentsUseCase::GetContinentsUseCase() {}

GetContinentsUseCase::~GetContinentsUseCase() {}

vector<Continent> GetContinentsUseCase::execute() {
    return continentRepository.getContinents();
}
