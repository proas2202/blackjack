//
// Created by aproemkin on 05.11.2020.
//

#include "Blackjack.h"

void Blackjack::add_player() {
    if (m_player.size() < c_playerLimit) {
        m_player.push_back(Player());
        m_player.at(0).set_cash(c_initCash);
    }
    else{
        std::cout << "Can't add new play. limit is exceeded " << std::endl;
    }
}

void Blackjack::init_game(){
     m_deckPile.create_deck_pile(c_deckPileSize);
     m_deckPile.shuffle();
     m_dealer.linking(&m_player,&m_deckPile);
     for(int inc = 0; inc < m_player.size(); inc++){
         m_player.at(inc).linking(&m_dealer,&m_deckPile);
         m_player.at(inc).set_cash(c_initCash);
     }
}

void Blackjack::start_game(){
    m_dealer.start_round();
}