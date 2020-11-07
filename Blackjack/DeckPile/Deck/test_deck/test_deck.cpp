//
// Created by aproemkin on 05.11.2020.
//

#include "Deck.h"
#include "gtest/gtest.h"

TEST(DeckT, testCard){
    Card card_obj_1(CardSuit::baptize,CardValue::five);
    Card card_obj_2(CardSuit::hearts,CardValue::ace);

    CardSuit testSuit_ref  = CardSuit::baptize;
    CardValue testValue_ref = CardValue::five;

    CardSuit testSuit_ref_2  = CardSuit::hearts;
    CardValue testValue_ref_2 = CardValue::ace;

    ASSERT_EQ(card_obj_1.get_suit(),testSuit_ref);
    ASSERT_EQ(card_obj_1.get_value(),testValue_ref);

    ASSERT_EQ(card_obj_2.get_suit(),testSuit_ref_2);
    ASSERT_EQ(card_obj_2.get_value(),testValue_ref_2);

};

TEST(DeckT, testTranslates){
    Card card_obj_1(CardSuit::baptize,CardValue::five);

    CardSuit testSuit;
    CardValue testValue;

    ASSERT_EQ(card_obj_1.get_suit(),Deck::card_suit_translate(3));
    ASSERT_EQ(card_obj_1.get_value(),Deck::card_value_translate(3));
};



TEST(DeckT, DeckTest){
    Deck deck_1;
    deck_1.deck_init();
    const int deck_size = deck_1.c_deckSize;
    CardSuit testSuit = CardSuit::peacks;
    CardValue testValue = CardValue::two;
    std::vector<Card> deck_out  = deck_1.get_deck();

    ASSERT_EQ(deck_size,deck_out.size());

    for (int inc = 0; inc < deck_size; inc++){
        ASSERT_NE(CardSuit::outOfRange, deck_out[inc].get_suit());
        ASSERT_NE(CardValue::outOfRange, deck_out[inc].get_value());
    }

    ASSERT_EQ(testSuit,deck_out[13].get_suit());
    ASSERT_EQ(testValue,deck_out[13].get_value());
};



int main(int argc, char **argv){
    ::testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}