#include <iostream>

#include "ContinentRepository.h"

using namespace std;

ContinentRepository::ContinentRepository() {}

ContinentRepository::~ContinentRepository() {}

vector<Continent> ContinentRepository::getContinents() {
    ContinentRepositoryCache& cache = ContinentRepositoryCache::getInstance();
    if (cache.continents == NULL) {
        fprintf(stderr, "Reading from local\n");
        cache.continents = local.getContinents();
    } else {
        fprintf(stderr, "Using cached\n");
    }
    return *cache.continents;
}
