#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "mult.hpp"

TEST(MultEvalTest, MultEvaluateNonZero) {
    Op* op1 = new Op(5);
    Op* op2 = new Op(2);
    Mult* test = new Mult(op1,op2);
    EXPECT_EQ(test->evaluate(), 10);
}

TEST(MultStringTest, MultEvaluateNonZero) {
   Op* op1 = new Op(5);
   Op* op2 = new Op(2); 
   Mult* test = new Mult(op1,op2);
   EXPECT_EQ(test->stringify(), "5.000000 * 2.000000");
}


TEST(MockMultiEvalTest, MockMultiEvaluateNonZero) {
    SevenOpMock* mock1 = new SevenOpMock();
    ThreeOpMock* mock2 = new ThreeOpMock();
    Mult* test = new Mult(mock1, mock2);
    EXPECT_EQ(test->evaluate(), 22.5);
}


TEST(MockMultStringTest, MockMultiEvaluateNonZero) {
    SevenOpMock* mock1 = new SevenOpMock();
    ThreeOpMock* mock2 = new ThreeOpMock();
    Mult* test = new Mult(mock1, mock2);
    EXPECT_EQ(test->stringify(), "7.5 * 3.0");
}

TEST(MockMultNegEvalTest, MockMultEvaluateNonZero) {
    SevenOpMock* mock1 = new SevenOpMock();
    NegThreeOpMock* mock2 = new NegThreeOpMock();
    Mult* test = new Mult(mock1, mock2);
    EXPECT_EQ(test->evaluate(), -22.5);
}


TEST(MockMultNegStringTest, MockMultEvaluateNonZero) {
    SevenOpMock* mock1 = new SevenOpMock();
    NegThreeOpMock* mock2 = new NegThreeOpMock();
    Mult* test = new Mult(mock1, mock2);
    EXPECT_EQ(test->stringify(), "7.5 * -3.0");
}

#endif
