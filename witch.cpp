#include "witch.h"
#include <iostream>
#include "string"
using namespace std;

witch::witch()
{
    this->health = 100;
    this->mana = 90;
    this->magic = 10;
}

void witch::attack()
{
    cout << "The witch attacks!"<<endl;
    health -= 10;
    cout << health<<endl;
}

void witch::power()
{
    string n;
    cout << "Would you like to use magic?"<<endl;
    cin >> n;

    if (n == "yes" || n == "YES" || n == "Yes")
    {
        cout << "Witch use her magic!"<<endl;

        this->mana -= 5;
        this->magic -= 2;
        cout <<"MANA: "<< this->mana<<"    "<<"MAGIC POINTS: " << this->magic;
    }
}
