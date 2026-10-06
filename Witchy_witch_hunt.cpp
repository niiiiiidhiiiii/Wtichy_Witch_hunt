#include "witch.h"
#include "story.h"
#include "knight.h"
#include "System.h"
#include <iostream>
#include <limits>
#include "string"
using namespace std;

int main()
{
    intro s;
    s.start();

    chocies_k k;
    k.blessing();
    
cout<<endl;
    cout<<"Enter the forest? \n"
    <<"1-> Yes. \n"
    <<"2-> as if I have a choice..\n";

    ACT1 a;
    a.forest();
    

    return 0;
}
