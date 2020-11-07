//
// Created by aproemkin on 07.11.2020.
//

#include "gtest/gtest.h"
#include "Hand.h"


TEST(Hand, ScoreTest){ // Test that shuffle work

    Hand hand_test;
    hand_test.accept_card(Card(CardSuit::peacks,CardValue::ace));
    ASSERT_EQ(hand_test.get_score(), 11);
    hand_test.accept_card(Card(CardSuit::hearts,CardValue::jack));
    ASSERT_EQ(hand_test.get_score(), 21);
    hand_test.accept_card(Card(CardSuit::hearts,CardValue::seven));
    ASSERT_EQ(hand_test.get_score(), 18);
    hand_test.accept_card(Card(CardSuit::hearts,CardValue::queen));
    ASSERT_EQ(hand_test.get_score(), 28);
};

int main(int argc, char **argv){
    ::testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}
