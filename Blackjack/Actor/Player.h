//
// Created by aproemkin on 07.11.2020.
//

#ifndef TASK_1_PLAYER_H
#define TASK_1_PLAYER_H


#include <vector>
#include "DeckPile.h"
#include "Actor.h"
#include "Dealer.h"

class  Player : Actor {

public:
    void dealer_linking(std::vector<Player>* players_i);
    void make_bet(int bet);
    void split();
    void req_bj_feed();
private:
    std::vector<Dealer>* dealer;
};





#endif //TASK_1_PLAYER_H
