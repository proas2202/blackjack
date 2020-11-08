//
// Created by aproemkin on 07.11.2020.
//

#include "Hand.h"
void Hand::accept_card(Card inCard){
    cardInHand.push_back(inCard);
}


int Hand::score_card(Card inCard) {
    int score = 0;
    if(inCard.get_value() == CardValue::two)           score = 2;
    else if(inCard.get_value() == CardValue::three)    score = 3;
    else if(inCard.get_value() == CardValue::four)     score = 4;
    else if(inCard.get_value() == CardValue::five)     score = 5;
    else if(inCard.get_value() == CardValue::six)      score = 6;
    else if(inCard.get_value() == CardValue::seven)    score = 7;
    else if(inCard.get_value() == CardValue::eight)    score = 8;
    else if(inCard.get_value() == CardValue::nine)     score = 9;
    else if(inCard.get_value() == CardValue::ten)      score = 10;
    else if(inCard.get_value() == CardValue::jack)     score = 10;
    else if(inCard.get_value() == CardValue::queen)    score = 10;
    else if(inCard.get_value() == CardValue::king)     score = 10;
    else if(inCard.get_value() == CardValue::ace)      score = 11;
    return score;
}

int Hand::get_score() {
    int score = 0;

    for (int inc = 0; inc<cardInHand.size(); inc++){
        score+=score_card(cardInHand[inc]);
    }

    if(score > 21) {
        score = 0;
        for (int inc = 0; inc<cardInHand.size(); inc++){
            if(score_card(cardInHand[inc]) == 11){
                score = score + 1;
            }
            else{
                score+=score_card(cardInHand[inc]);
            }
        }
    }
    return score;
}

std::vector<Card> Hand::get_hand(){
    return cardInHand;
}

int Hand::get_bet(){
    return m_bet;
}

void Hand::set_bet(int bet_i){
    m_bet = bet_i;
}