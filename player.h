#include <string>
#include <cstdlib>
#include <iostream>
#include "hand.h"

using namespace std;

/**
 * Class that implements a player of the game.
 */
class Player
{
	int index;
	string name;
    int bucketSize;  // the current size of the bucket (initialized to 0 and incremented when cards are added)
	string status; // the status of the player, one of "HASNTPLAYED", "PASSED",
                   // "PLAYED", "HASNOCARDSLEFT", "WONTHETRICK"
public:

    /**
     * Initializes a player setting the index, the name, and the status.
     * The size of the bucket is also initialized to zero.
     *
     * @param idx the index of the player.
     */
	Player(int idx);

	void setStatus(string newStatus);
	bool hasStatus(string checkStatus);
	string getName();
	bool hasNoCardsLeft();
	bool decidePlay();
};
