#ifndef __CLASS
#define __CLASS

#include <iostream>
#include <string>

class player{
    public:
        std::string name;
        int power;

    public:
        player(std::string isiNama, int kekuatan) {
            this->name = isiNama;
            this->power = kekuatan;
        }
    
    void display();
    void getnama();
    void getpower();
};

#endif