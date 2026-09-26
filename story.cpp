#include "story.h"
#include<iostream>
#include<limits>
#include "string"
using namespace std;
 void tocontinue()
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}



void intro::start(){
    string Name;

   
void intro(){
    cout << "Speaker: Welcome to the Witchy Witch Hunt!" << endl;
    tocontinue();
    cout << "Speaker: Would you like to go in adventure fill with mystery and a hunt?" << endl;
    tocontinue();
    cout << "Speaker: Where dear hunters, have chance to win the title of honorable hero and the grand price from his majesty!!\n"
         << "Crowds whispers: I heard crown prince will also be hunting her!\n"
         << "Crowds whispers: Really? (fawns) I will pray for his highness's victory!!\n";
    tocontinue();

    cout << "Unknown: They will never let me breath in peace, will they?\n"
         << "I should leave before anyone spots me\n"
         << "\033[31m" << "That figure in shabby brown cloak, hidden behind the narrow street from it\n was watching the whole witch hunt annoucement in capital \n circle, moved with stillness of shadow itself and left." << "\033[0m"
         << "\n";
    cout << "The shaodw figure was none other than-(Please enter your name!)" << endl;
    cin >> Name;
    cout << "Witch " << Name << " of the empire Romiana." << endl;

};
}