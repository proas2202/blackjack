//
// Created by aproemkin on 07.11.2020.
//

#include "DeckPile.h"
#include "gtest/gtest.h"

TEST(DeckPile, AllCardPresented_Test){ // Check that all card form N - decks are presented in the Deck Pile

    DeckPile deckP_obj;
    const int numberDecksInShoe = 3;
    deckP_obj.create_deck_pile(numberDecksInShoe);

    deckP_obj.shuffle();
    std::vector<Card> deck = deckP_obj.get_shoe();

    int cardCounter = 0;

    for ( int inc_suit = 0; inc_suit < Deck::c_numberOfSuit;inc_suit++ ){
        for ( int inc_value = 0; inc_value < Deck::c_numberOfValue;inc_value++ ){
            for ( int inc_shoe = 0; inc_shoe < deck.size(); inc_shoe++ ){
                if (deck[inc_shoe].get_suit() == Deck::card_suit_translate(inc_suit) && deck[inc_shoe].get_value() == Deck::card_value_translate(inc_value) ) {
                    cardCounter++;
                }
            }
            ASSERT_EQ(cardCounter,numberDecksInShoe);
            cardCounter = 0;
        }
    }
};



TEST(DeckPile, Shuffle_Test){ // Test that shuffle work

    DeckPile deckP_obj;
    const int numberDecksInShoe = 3;
    deckP_obj.create_deck_pile(numberDecksInShoe);

    ////////// Target test function //////////////////
    deckP_obj.shuffle();                      ///////
    ////////////////////////////////////////////////

    std::vector<Card> deck = deckP_obj.get_shoe();

    Deck testDeck;
    testDeck.deck_init();
    std::vector<Card> testDeckVector = testDeck.get_deck();

    int cardCounter = 0;

    for ( int inc_shoe = 0; inc_shoe < testDeckVector.size(); inc_shoe++ ){
        if (deck[inc_shoe].get_suit() == testDeckVector[inc_shoe].get_suit() && deck[inc_shoe].get_value() == testDeckVector[inc_shoe].get_value() ) {
            cardCounter++;
        }
    }
    ASSERT_NE(cardCounter,testDeckVector.size());
};

int main(int argc, char **argv){
    ::testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}
