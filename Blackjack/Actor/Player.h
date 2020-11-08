//
// Created by aproemkin on 07.11.2020.
//

#ifndef TASK_1_PLAYER_H
#define TASK_1_PLAYER_H


#include <vector>
#include "DeckPile.h"
#include "Actor.h"
#include "Dealer.h"


class  Dealer;
class Actor;

class Player : Actor{

public:

    void linking(Dealer* dealer_i, DeckPile* deckPile_i);
    void set_cash(int cash_i);
    void accept_card(Card card_i);

    std::vector<Hand>* get_hand_ptr();

    void reckoning(int bet_i, int coeff);
    void make_bet();

    void make_move();
    void split();
    void req_bj_feed();

private:
    int cash;
    Dealer* dealer;
};


#endif //TASK_1_PLAYER_H
