#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"

#include "add.hpp"

TEST(AddEvalTest, AddEvaluateNonZero) {
    Op* op1 = new Op(8);
    Op* op2 = new Op(2);
    Add* test = new Add(op1,op2);
    EXPECT_EQ(test->evaluate(), 10.000000);
}

TEST(AddStringTest, AddEvaluateNonZero) {
    Op* op1 = new Op(8);
    Op* op2 = new Op(2);
    Add* test = new Add(op1,op2);
    EXPECT_EQ(test->stringify(), "8.000000 + 2.000000");
}

TEST(MockAddEvalTest, MockAddEvaluateNonZero) {
    SevenOpMock* mock1 = new SevenOpMock();
    ThreeOpMock* mock2 = new ThreeOpMock();
    Add* test = new Add(mock1, mock2);
    EXPECT_EQ(test->evaluate(), 10.5);
}


TEST(MockAddStringTest, MockAddEvaluateNonZero) {
    SevenOpMock* mock1 = new SevenOpMock();
    ThreeOpMock* mock2 = new ThreeOpMock();
    Add* test = new Add(mock1, mock2);
    EXPECT_EQ(test->stringify(), "7.5 + 3.0");
}

TEST(MockAddNegEvalTest, MockAddEvaluateNonZero) {
    SevenOpMock* mock1 = new SevenOpMock();
    NegThreeOpMock* mock2 = new NegThreeOpMock();
    Add* test = new Add(mock1, mock2);
    EXPECT_EQ(test->evaluate(), 4.5);
}


TEST(MockAddNegStringTest, MockAddEvaluateNonZero) {
    SevenOpMock* mock1 = new SevenOpMock();
    NegThreeOpMock* mock2 = new NegThreeOpMock();
    Add* test = new Add(mock1, mock2);
    EXPECT_EQ(test->stringify(), "7.5 + -3.0");
} 


#endif
