#ifndef CONTINENTREPOSITORYLOCAL_H
#define CONTINENTREPOSITORYLOCAL_H

#include <vector>

#include "Continent.h"
#include "LogUseCase.h"

using namespace std;

class ContinentRepositoryLocal {

private:

    LogUseCase log;

public:

    ContinentRepositoryLocal();
    virtual ~ContinentRepositoryLocal();

    vector<Continent>* getContinents();

};

#endif // ifndef CONTINENTREPOSITORYLOCAL_H
