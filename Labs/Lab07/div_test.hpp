#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"

#include "div.hpp"

TEST(DivEvalTest, DivEvaluateNonZero) {
    Op* op1 = new Op(4);
    Op* op2 = new Op(2);
    Div* test = new Div(op1,op2);
    EXPECT_EQ(test->evaluate(), 2.000000);
}

TEST(DivStringTest, DivEvaluateNonZero) {
   Op* op1 = new Op(4);
   Op* op2 = new Op(2);
   Div* test = new Div(op1,op2);
   EXPECT_EQ(test->stringify(), "4.000000 / 2.000000");
}

TEST(MockDivEvalTest, MockDivEvaluateNonZero) {
    SevenOpMock* mock1 = new SevenOpMock();
    ThreeOpMock* mock2 = new ThreeOpMock();
    Div* test = new Div(mock1, mock2);
    EXPECT_EQ(test->evaluate(), 2.5);
}


TEST(MockDivStringTest, MockDivEvaluateNonZero) {
    SevenOpMock* mock1 = new SevenOpMock();
    ThreeOpMock* mock2 = new ThreeOpMock();
    Div* test = new Div(mock1, mock2);
    EXPECT_EQ(test->stringify(), "7.5 / 3.0");
}

TEST(MocknDivEvalTest, MockDivEvaluateNonZero) {
    SevenOpMock* mock1 = new SevenOpMock();
    NegThreeOpMock* mock2 = new NegThreeOpMock();
    Div* test = new Div(mock1, mock2);
    EXPECT_EQ(test->evaluate(), -2.5);
}


TEST(MocknDivStringTest, MockDivEvaluateNonZero) {
    SevenOpMock* mock1 = new SevenOpMock();
    NegThreeOpMock* mock2 = new NegThreeOpMock();
    Div* test = new Div(mock1, mock2);
    EXPECT_EQ(test->stringify(), "7.5 / -3.0");
}




#endif
