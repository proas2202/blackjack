//
// Created by aproemkin on 07.11.2020.
//

#include "Player.h"

void Player::set_cash(int cash_i){
    cash = cash_i;
}
void Player::linking(Dealer* dealer_i, DeckPile* deckPile_i){
    dealer = dealer_i;
    deckPile = deckPile_i;
}

void Player::accept_card(Card card_i){
    m_hand.at(0).accept_card(card_i);
}

std::vector<Hand>* Player::get_hand_ptr(){
    return &m_hand;
}

void Player::reckoning(int bet_i, int coeff){
    cash = cash + bet_i*coeff;
}

void Player::make_bet(){
    m_hand.at(0).set_bet(10);
}

void Player::make_move(){ // TODO plug now
    while(m_hand.at(0).get_score() < 18){
         m_hand.at(0).accept_card(deckPile->get_card());
    }
}