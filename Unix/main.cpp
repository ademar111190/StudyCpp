#include <iostream>

#include "sqlite3.h"

#include "player.h"
#include "continent.h"
#include "ContinentRepository.h"

using namespace std;

int main(int argc, char const *argv[]) {
    srand(time(0) * *((int *)argv));
    Player p = { 18 + (rand() % 30) };
    fprintf(stderr, "Player age: %d\n", p.age);

    Continent c = { 1, "azul" };
    fprintf(stderr, "Continent id: %d, name: %s\n", c.id, c.name.c_str());

    sqlite3 *inputDb;

    if (sqlite3_open("../Database/input.db", &inputDb)) {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(inputDb));
    } else {
        fprintf(stderr, "Opened database successfully\n");
        sqlite3_close(inputDb);
    }

    ContinentRepository repository = ContinentRepository();
    vector<Continent> continents = repository.getContinents();
    fprintf(stderr, "%lu\n", continents.size());

    return 0;
}
