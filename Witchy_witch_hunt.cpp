#include "witch.h"
#include <iostream>
#include <limits>
#include "string"
using namespace std;
//~~~~~~~~~function to cont~~~~~~~~~~~~~//
void tocontinue(){
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
int main()
{
  //Intro
  string Name;
    
    cout<<"Welcome to the Witch Witch Hunt!"<<endl;
    tocontinue();
    cout<<"Would you like to go in adventure fill with mystery, love and a hunt?"<<endl;
    tocontinue();
    cout<<"Being a witch was never a easy task.\n"
    <<"Who would know that better than you?\n"
    <<"The only witch left in this forest\n"
    <<"\n";
    cout<<"None other than-(Please enter your name!)"<<endl;
    cin>>Name;
    tocontinue();
     cout<<"Witch "<<Name<<" of the empire Romiana."<<endl;

   string start;
   cout<<"Write start to continue the game: "<<endl; 
   cin>>start;
if(start == "start" || start == "START"){
    witch Witch;

    Witch.attack();
    Witch.power();
}


    return 0;
}


