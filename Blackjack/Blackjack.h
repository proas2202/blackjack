//
// Created by aproemkin on 05.11.2020.
//

#ifndef TASK_1_BLACKJACK_H
#define TASK_1_BLACKJACK_H
#include "Actor.h"
#include "Dealer.h"

#include <vector>

class Blackjack{

public:
     void add_player();
     void init_game();
     void start_game();
     void end_game();
private:
    Dealer m_dealer;
    std::vector<Player>  m_player;
    DeckPile m_deckPile;

    //----- Config-----------
    const int c_initCash = 100;
    const int c_playerLimit = 4;
    const int c_deckPileSize = 4;
};




#endif //TASK_1_BLACKJACK_H
