#include "witch.h"
#include "story.h"
#include <iostream>
#include <limits>
#include "string"
using namespace std;
//~~~~~~~~~function to cont~~~~~~~~~~~~~//
void tocontinue()
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
int main()
{
    intro s;
    s.start();

    string start;
    cout << "Write start to continue the game: " << endl;
    cin >> start;
    if (start == "start" || start == "START")
    {
        witch Witch;

        Witch.attack();
        Witch.power();
    }

    return 0;
}
