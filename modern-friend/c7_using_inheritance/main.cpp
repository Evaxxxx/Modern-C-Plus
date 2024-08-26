#include <iostream>
#include "person.h"
#include "worker.h"
#include "engineer.h"
#include "player.h"
#include "ballplayer.h"
#include "programmer.h"
using namespace std;

// person -> public worker
// person -> private engineer -> public programmer
// person -> protected player -> public ballplayer
int main(int argc, char *argv[])
{
    Programmer p2;
    cout << p2.get_age() << endl;
    cout << p2.get_name() << endl;
    cout << p2 << endl;


    cout << "-----------------" << endl;
    return 0;
}
