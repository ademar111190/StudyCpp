#ifndef GETCONTINENTSUSECASE_H
#define GETCONTINENTSUSECASE_H

#include <vector>

#include "Continent.h"
#include "ContinentRepository.h"

using namespace std;

class GetContinentsUseCase {

private:

    ContinentRepository continentRepository;

public:

    GetContinentsUseCase();
    virtual ~GetContinentsUseCase();

    vector<Continent> execute();

};

#endif // ifndef GETCONTINENTSUSECASE_H
