//
// Created by aproemkin on 07.11.2020.
//

#ifndef TASK_1_ACTOR_H
#define TASK_1_ACTOR_H

#include <vector>
#include "DeckPile.h"
#include "Hand.h"

class  Actor{

public:
    Actor(){
        m_hand.push_back(Hand());
        m_bust_flag = 0;
    }
    void hit_card();
    void bust();
    std::vector<Hand> m_hand;
private:
    bool m_bust_flag;
protected:
    DeckPile* deckPile;
};



#endif //TASK_1_ACTOR_H
