#ifndef __DEFINITION
#define __DEFINITION

#include <iostream>
#include "class.hpp"

using namespace std;

void player::display() {
    cout << "nama: " << this->name << endl;
    cout << "power: " << this->power << endl;
}

void player::getnama() {
    cout << "nama: " << this->name << endl;
}

void player::getpower() {
    cout << "power: " << this->power << endl;
}

#endif