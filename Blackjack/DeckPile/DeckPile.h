//
// Created by aproemkin on 05.11.2020.
//

#ifndef TASK_1_DECKPILE_H
#define TASK_1_DECKPILE_H

class DeckPile{

public:

    void create_deck_pile(int deckNumber);
    void deg_card_number();
    void refresh_deck_pile();

private:
    Deck   m_deck;
    int    m_deckNumber;
};

#endif //TASK_1_DECKPILE_H
