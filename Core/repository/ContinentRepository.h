#ifndef CONTINENTREPOSITORY_H
#define CONTINENTREPOSITORY_H

#include <vector>

#include "Continent.h"
#include "ContinentRepositoryCache.h"
#include "ContinentRepositoryLocal.h"
#include "LogContract.h"

using namespace std;

class ContinentRepository {

private:

    LogContract log;
    ContinentRepositoryLocal local;

public:

    ContinentRepository();
    virtual ~ContinentRepository();

    vector<Continent> getContinents();

};

#endif // ifndef CONTINENTREPOSITORY_H
