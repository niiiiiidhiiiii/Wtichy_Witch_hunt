#include "System.h"
#include "story.h"
#include <iostream>
using namespace std;

 Howdesee::Howdesee()
{
    this->p = 10;
    this->g = 0;
    this->t = 10;
};

void Howdesee::popularity(int user)
{
    if (user == 1)
    {
        p = p + 2;
        cout << "Popularity point gained: +2";
    }
    else if(user == 2)
    {
        cout << "Lost popularity points!";
        p = p - 2;
    }
};

void Howdesee::trust(int user)
{
    if (user == 1)
    {
        t = t + 2;
        cout << "Popularity point gained: +2"<<t;
    }
    else if(user == 2)
    {
        cout << "Lost popularity points!"<<t;
        t = t - 2;
    }
    else
    {
        cout << "Wrong input!";
    };
};
void Howdesee::trustgained(int user)
{
    if (user == 1)
    {
        g = g + 2;
        cout << "Popularity point gained: +2"<<g;
    }
    else if(user == 2)
    {
        cout << "Lost popularity points!"<<g;
        g = g - 2;
    }
    else
    {
        cout << "Wrong input!";
    }
};
chocies_k::chocies_k()
{
    int user;
};

void chocies_k::blessing()
{
    cout << "Would you like to be blessed by emperor? \n"
         << "1 for yes [Walks Forward] \n"
         << "2 for no {hesitate}\n";
    cin >> user;
    Howdesee h;
    intro i;
    
    h.popularity(user);
    if(user == 1){
        i.beingbless();
        
    }
    else if (user==2){
        i.walksaway();
    }
    else{
        cout<<"Enter the choice again: "<<endl;
        blessing();
    }
};
