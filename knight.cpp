#include "knight.h"
#include <iostream>
using namespace std;

Knight::Knight()
{
    this->health = 100;
    this->Stamina = 100;
    this->sanity = 100;
}



void Knight::displayk()
{
    std::cout << "The current status of asher is: \n"
         << "Health: " << health << '\n'
         << "Stamina: " << Stamina << '\n'
         << "Sanity: " << sanity << '\n';
};
