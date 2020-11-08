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
   std::vector<Card> get_hand();
   int get_bet();
   void set_bet(int bet_i);
private:
   int m_handValue = 0;
   int m_bet = 0;
   std::vector<Card> cardInHand;
   int score_card(Card inCard);
};


#endif //TASK_1_HAND_H
