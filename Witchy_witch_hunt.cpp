#include "witch.h"
#include "story.h"
#include "knight.h"
#include "System.h"
#include <iostream>
#include <limits>
#include "string"
using namespace std;
//~~~~~~~~~function to cont~~~~~~~~~~~~~//
// void tocontinue()
// {
//     cin.ignore(numeric_limits<streamsize>::max(), '\n');
//     cin.get();
// }
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
int main()
{
    intro s;
    s.start();

    chocies_k k;
    k.blessing();

    return 0;
}
