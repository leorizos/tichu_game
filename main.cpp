#include <string>
#include <cstdlib>
#include <iostream>
#include "player.h"

using namespace std;

int main()
{
    Player players[4] = {Player(0), Player(1), Player(2), Player(3)};
    players[0].setStatus("op");
    cout << players[0].decidePlay();
    return 0;
}
