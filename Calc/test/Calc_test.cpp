#include "strCalc.h"
#include "gtest/gtest.h"

TEST(Factorial, Correct){
  Calc obj;
  ASSERT_EQ(obj.fact(0),1);
  ASSERT_EQ(obj.fact(1),1);
  ASSERT_EQ(obj.fact(7),5040);
};

TEST(Factorial, Incorrect){
    Calc obj;
    ASSERT_EQ(obj.fact(-10),-1);
};

int main(int argc, char **argv){
    ::testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}