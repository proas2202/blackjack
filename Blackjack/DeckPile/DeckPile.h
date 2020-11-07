//
// Created by aproemkin on 05.11.2020.
//

#ifndef TASK_1_DECKPILE_H
#define TASK_1_DECKPILE_H

#include <vector>
#include "Deck.h"
#include <algorithm>
#include <iostream>

class DeckPile{

public:

    void create_deck_pile(int deckNumber);
    void shuffle();
    std::vector<Card> get_shoe();
    int get_card_number();
    Card get_card();

private:
    Deck m_deck;
    std::vector<Card> m_shoe;
    int    m_deckNumber;
    int    m_counter;
};

#endif //TASK_1_DECKPILE_H
