#include <iostream>
#include "definition.hpp"
#include "class.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    player* player1 = new player("sulaiman", 100);
    player1->display();
    player1->getpower();
    player1->getnama();
    return 0;
}
