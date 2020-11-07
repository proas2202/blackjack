//
// Created by aproemkin on 05.11.2020.
//

#include "Deck.h"

CardValue Card::get_value(){
    return m_value;
}

CardSuit Card::get_suit(){
    return m_suit;
}


void Deck::deck_init(){
   int cardCount = 0;
   for (int inc_suit = 0; inc_suit < c_numberOfSuit; inc_suit++){
       for (int inc_value = 0; inc_value < c_numberOfValue; inc_value++){
           deck_stack.push_back(Card(card_suit_translate(inc_suit),card_value_translate(inc_value)));
           cardCount++;
       }
   }
}

std::vector<Card> Deck::get_deck() {
    return deck_stack;
}

CardSuit Deck::card_suit_translate(int suit_index){
    if(suit_index < 0 || suit_index > 3 ){
        return CardSuit::outOfRange;
    }

    switch (suit_index) {
        case 0:
            return CardSuit::hearts;
            break;
        case 1:
            return CardSuit::peacks;
            break;
        case 2:
            return CardSuit::diamonds;
            break;
        case 3:
            return CardSuit::baptize;
            break;
        default:
            break;
    }
    return CardSuit::outOfRange;
}
CardValue Deck::card_value_translate(int value_index){

    if(value_index < 0 || value_index > 12 ){
        return CardValue::outOfRange;
    }

    switch (value_index) {
        case 0:
            return CardValue::two;
            break;
        case 1:
            return CardValue::three;
            break;
        case 2:
            return CardValue::four;
            break;
        case 3:
            return CardValue::five;
            break;
        case 4:
            return CardValue::six;
            break;
        case 5:
            return CardValue::seven;
            break;
        case 6:
            return CardValue::eight;
            break;
        case 7:
            return CardValue::nine;
            break;
        case 8:
            return CardValue::ten;
            break;
        case 9:
            return CardValue::jack;
            break;
        case 10:
            return CardValue::queen;
            break;
        case 11:
            return CardValue::king;
            break;
        case 12:
            return CardValue::ace;
            break;
        default:
            break;
    }
    return CardValue::outOfRange;
}