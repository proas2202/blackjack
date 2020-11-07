//
// Created by aproemkin on 07.11.2020.
//

#ifndef TASK_1_DEALER_H
#define TASK_1_DEALER_H


#include <vector>
#include "DeckPile.h"
#include "Actor.h"
#include "Player.h"

class  Dealer : Actor {

public:
    void players_init(std::vector<Player>* players_i);
    void reward_card();
    void start_round();
    void finish_round();
private:
    std::vector<Player>* players;
};


#endif //TASK_1_DEALER_H
