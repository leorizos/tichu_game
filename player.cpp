#include "player.h"

Player::Player(int idx){

    index = idx;
    name = " ";
    status = "";
    bucketSize = 0;

}

void Player::setStatus(string newStatus){

    status = newStatus;
}

bool Player::hasStatus(string checkStatus){

    if(checkStatus == status)
        return true;
    else
        return false;
}

string Player::getName(){
    return name;
 }

bool Player::hasNoCardsLeft(){

    if (Hand.currentNumberOfCards == 0)
        return true;
    else
        return false;

 }

  /*bool hasMahJong(){
    int x=0;
    for(int i=0; i<=14; i++){
        if (card == MAHJONG)
            x++;}
    if (x == 1 )
        return true;
    else
        return false;
 }*/


 bool Player::decidePlay(){
    int y;
    y = rand()%2+1;
    if(y ==1)
        return true;
    else
        return false;
 }

