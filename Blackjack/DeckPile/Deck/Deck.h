//
// Created by aproemkin on 05.11.2020.
//

#ifndef TASK_1_DECK_H
#define TASK_1_DECK_H

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
    jak   = 9,
    queen = 10,
    king  = 11,
    ace   = 12
};

enum class CardSuit{
    hearts,
    peacks,
    diamonds,
    baptize
};


class Card{

public:
    void create_card(CardSuit,CardValue);
private:
    CardSuit m_suit;
    CardValue m_value;
};


class Deck{

public:
    void create_deck();
private:
    Card deck_stack[52];
};





#endif //TASK_1_DECK_H
