#ifndef CONTINENTREPOSITORYLOCAL_H
#define CONTINENTREPOSITORYLOCAL_H

#include <vector>

#include "Continent.h"
#include "LogContract.h"
#include "PathContract.h"

using namespace std;

class ContinentRepositoryLocal {

private:

    LogContract log;
    PathContract path;

public:

    ContinentRepositoryLocal();
    virtual ~ContinentRepositoryLocal();

    vector<Continent>* getContinents();

};

#endif // ifndef CONTINENTREPOSITORYLOCAL_H
