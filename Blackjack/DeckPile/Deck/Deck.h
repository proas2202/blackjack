//
// Created by aproemkin on 05.11.2020.
//

#ifndef TASK_1_DECK_H
#define TASK_1_DECK_H

#include <vector>

enum class CardValue{
    two   = 0,
    three = 1,
    four  = 2,
    five  = 3,
    six   = 4,
    seven = 5,
    eight = 6,
    nine  = 7,
    ten   = 8,
    jack   = 9,
    queen = 10,
    king  = 11,
    ace   = 12,
    outOfRange   = 99

};

enum class CardSuit{
    hearts,
    peacks,
    diamonds,
    baptize,
    outOfRange   = 99
};


class Card{

public:
    Card(){
        m_suit =  CardSuit::outOfRange;
        m_value = CardValue::outOfRange;
    }

    Card(const CardSuit suit_i,const CardValue value_i){
        m_suit =  suit_i;
        m_value = value_i;
    }

    CardSuit get_suit();
    CardValue get_value();

private:
    CardSuit m_suit;
    CardValue m_value;
};


class Deck{

public:
    static const int c_deckSize = 52;
    static const int c_numberOfSuit = 4;
    static const int c_numberOfValue = 13;

    void   deck_init();
    std::vector<Card> get_deck();
    static CardSuit card_suit_translate(int suit_index);
    static CardValue card_value_translate(int value_index);
private:
    std::vector<Card> deckStack;
};





#endif //TASK_1_DECK_H
