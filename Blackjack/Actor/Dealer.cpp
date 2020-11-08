//
// Created by aproemkin on 07.11.2020.
//

#include "Dealer.h"

void Dealer::linking(std::vector<Player>* players_i, DeckPile* deckPile_i){
    players = players_i;
    deckPile = deckPile_i;
}

void Dealer::start_round(){
         // TODO  Check deckPile
     players->at(0).make_bet();
     reward_card();
     players->at(0).make_move();
     open_hide_card();
     draw_cards();
     finish_round();
}

void Dealer::reward_card(){ //TODO Multiplayer

    players->at(0).accept_card(deckPile->get_card());
    m_hand.at(0).accept_card(deckPile->get_card());

    players->at(0).accept_card(deckPile->get_card());
    hideHand.accept_card(deckPile->get_card());
}

void Dealer::open_hide_card(){
    m_hand.at(0).accept_card(hideHand.get_hand().at(0));
}

void Dealer::draw_cards(){

    while (m_hand.at(0).get_score() < 17){
        m_hand.at(0).accept_card(deckPile->get_card());
    }

}

void Dealer::finish_round(){
    // TODO multiplayer
    int dealerScore = m_hand.at(0).get_score();
    Hand playerHand = players->at(0).get_hand_ptr()->at(0);

    if (playerHand.get_score() > dealerScore){
        players->at(0).reckoning(playerHand.get_bet(),2);
    }
    else if (playerHand.get_score() < dealerScore ){
        players->at(0).reckoning(-playerHand.get_bet(),1);
    }
    else{
        players->at(0).reckoning(playerHand.get_bet(),1);
    }
}