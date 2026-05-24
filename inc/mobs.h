#ifndef MOBS_H
#define MOBS_H
#include <string>
#include <iostream>
using namespace std;

class mobs {
public:
    string nome;
    int vida;
    int dano;
    mobs(string n, int v, int d);
};
#endif