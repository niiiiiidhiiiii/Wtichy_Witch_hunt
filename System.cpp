#include "System.h"
#include <iostream>
using namespace std;

void Howdesee::Howdesee()
{
    this->p = 10;
    this->g = 0;
    this->t = 10;
}

void Howdesee::popularity()
{
    if (user == 1)
    {
        p = p + 2;
        cout << "Popularity point gained: +2";
    }
    ifelse(user == 2)
    {
        cout << "Lost popularity points!";
        p = p - 2
    }
}

void Howdesee::trust()
{
    if (user == 1)
    {
        t = t + 2;
        cout << "Popularity point gained: +2";
    }
    ifelse(user == 2)
    {
        cout << "Lost popularity points!";
        t = t - 2
    }
    else
    {
        cout << "Wrong input!";
    }
}
void Howdesee::trustgained()
{
    if (user == 1)
    {
        g = g + 2;
        cout << "Popularity point gained: +2";
    }
    ifelse(user == 2)
    {
        cout << "Lost popularity points!";
        g = g - 2
    }
    else
    {
        cout << "Wrong input!";
    }
}
void chocies_k::chocies_k()
{
    int user;
}

void chocies_k::blessing()
{
    cout << "Would you like to be blessed by emperor? \n"
         << "1 for yes \n"
         << "2 for no \n";
    cin >> user;
}
