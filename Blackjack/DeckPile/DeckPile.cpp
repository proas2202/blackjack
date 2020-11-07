//
// Created by aproemkin on 05.11.2020.
//


#include "DeckPile.h"

void DeckPile::create_deck_pile(int deckNumber){
    m_deck.deck_init();
    std::vector<Card> temp_deck = m_deck.get_deck();

    for(int inc = 0; inc < deckNumber; inc++){
        m_shoe.insert(m_shoe.cend(),temp_deck.cbegin(),temp_deck.cend());
    }
    m_deckNumber = deckNumber;
}

void DeckPile::shuffle(){
    if(m_shoe.size() < 2){
        std::cout<< "Error deckPile doesn't exist" << std::endl;
        return;
    }
    std::random_shuffle(m_shoe.begin(),m_shoe.end());
    std::vector<Card> temp_deck;
    temp_deck = m_shoe;
}

std::vector<Card> DeckPile::get_shoe(){
    return m_shoe;
}

int DeckPile::get_card_number(){
    return m_shoe.size();
}

Card DeckPile::get_card(){
    Card lastCard = m_shoe.back();
    m_shoe.pop_back();
    return lastCard;
}

