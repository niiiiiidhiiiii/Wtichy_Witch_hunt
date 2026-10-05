#include "story.h"
#include <iostream>
#include <limits>
#include "string"
using namespace std;
void tocontinue()
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

void intro::start()
{
    string Name;

    cout << "Capital looked like the very definition of magically beautiful. \n It felt alive, more so than it ever felt before. \nAll because of the day, which occurred after 5 springs had already passed.\n"
         << "Extra Character: 'EXTRA EXTRA READ ALL ABOUT IT !!'\n"
         << "A kid with a cheerful voice ran around, shouting and throwing the newspaper at commoners and nobles. \nToday is the day when both of them come together in the capital's centre, with no malice or status standing in between.\n";

        tocontinue();

    cout << "Today is the day. \n "
         << "When the best of the best warriors. \n "
         << "Go for the toughest hunt." << endl;

    tocontinue();
    cout << "\033[33m" << "Extra Char : 'I heard the crown prince will participate in this!' Noble ladies squealed, swooning." << "\033[0m \n"
    << "ladies squealed, swooning. \n"
    << "Knights sharpen the weapons after getting them blessed by the head priest.\n"
    << "And capital burst of colour \n";

    tocontinue();

    cout << "And arch mage...Who has never set foot out for any human stupid celebration was sitting in the front seat with barely there upward tilt of lips. \n";
    cout << "I, Asher P, am a knight directly under the emperor himself. \n";

    cout << "<--------x--------X--------x--------->";

    cout << "My spine straightened when the host cleared his throat. \n His voice echoed with the buzzing of magic, which helped him be heard within a 500-meter radius.";
    tocontinue();
    cout << "Host: `Our dearest nobles and citizens! Today, we all stand here together for the celebration of the spring festival and to give our respect for the 2nd emperor of the world who saved our land from the clutches of witches!`" << endl;
    tocontinue();
    cout << "Everyone cheered so loudly; I was afraid even the other empire must have heard the roars. \n";

    tocontinue();
    cout << "Host: 'Our dearest nobles and citizens.' His voice turned deeper, lower. 'Today, our knights will honour the name of our current and every previous empire as they will go on a hunt in the forest of (unknown)'" << endl;
    tocontinue();
    cout << "Host: 'TO HUNT THE LAST REMAINING WITCH!!' \n";
    cout << "The cheers grow louder, if that's even possible. \n"
         << "It is true. The witches all vanished centuries ago from this holy land; the magic and potions they used were all forbidden, but last year some people heard about her.\n"
         << "\033[34m" << "For the first time, a witch was seen." << "\033[0m" << endl;

    cout << "<-----x-----Asher's POV-----x----->" << endl;

    cout << "I stepped onto the makeshift stage, where the host stood with His Majesty himself. \n All the other hunters, only five, were already blessed by His Majesty.\n";
    tocontinue();
    cout << "It's his last chance for him. \nEither he could turn away and make himself an enemy, or go down for a hunt he has no interest in. \n";
};

// choice for the belssing.
