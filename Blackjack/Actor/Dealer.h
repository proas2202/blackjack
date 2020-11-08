//
// Created by aproemkin on 07.11.2020.
//

#ifndef TASK_1_DEALER_H
#define TASK_1_DEALER_H


#include <vector>
#include "DeckPile.h"
#include "Actor.h"
#include "Player.h"

class Player;

class Dealer : Actor{

public:
    void linking(std::vector<Player>* players_in, DeckPile* deckPile_i);
    void start_round();
    void finish_round();
private:
    std::vector<Player>* players;
    Hand hideHand;

    void reward_card();
    void open_hide_card();
    void draw_cards();
};


#endif //TASK_1_DEALER_H
