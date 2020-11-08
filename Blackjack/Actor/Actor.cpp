//
// Created by aproemkin on 07.11.2020.
//

#include "Actor.h"

void Actor::hit_card(){
    m_hand.at(0).accept_card(deckPile->get_card()); // TODO multihand
}

void Actor::bust(){
   m_bust_flag = 1;
}