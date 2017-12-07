#include <iostream>

#include "sqlite3.h"

#include "player.h"

int main(int argc, char const *argv[]) {
    std::srand(std::time(0) * *((int *)argv));
    Player p = { 18 + (std::rand() % 30) };
    fprintf(stderr, "Player age: %d\n", p.age);

    sqlite3 *inputDb;

    if (sqlite3_open("../Database/input.db", &inputDb)) {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(inputDb));
    } else {
        fprintf(stderr, "Opened database successfully\n");
        sqlite3_close(inputDb);
    }

    return 0;
}
