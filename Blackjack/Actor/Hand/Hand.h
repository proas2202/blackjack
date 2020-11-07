//
// Created by aproemkin on 07.11.2020.
//

#ifndef TASK_1_HAND_H
#define TASK_1_HAND_H

#include "Deck.h"

class Hand{

public:
   int get_score();
   void accept_card(Card inCard);
   int score_card(Card inCard);
private:
   int m_handValue = 0;
   std::vector<Card> cardInHand;
};


#endif //TASK_1_HAND_H
