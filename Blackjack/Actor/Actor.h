//
// Created by aproemkin on 07.11.2020.
//

#ifndef TASK_1_ACTOR_H
#define TASK_1_ACTOR_H


#include <vector>
#include "DeckPile.h"
class  Actor{

public:

    Actor(DeckPile* deck_i){
        deck = deck_i;
    }
    void hit_card();
    void bust();
private:
    int cash;
    std::vector<Hand> m_hand;
    DeckPile* deck;
};



#endif //TASK_1_ACTOR_H
