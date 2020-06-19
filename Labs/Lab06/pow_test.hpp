#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"

#include "pow.hpp"

TEST(PowEvalTest, PowEvaluateNonZero) {
    Op* op1 = new Op(2);
    Op* op2 = new Op(3);
    Pow* test = new Pow(op1,op2);
    EXPECT_EQ(test->evaluate(), 8.000000);
}

TEST(PowStringTest, PowEvaluateNonZero) {
    Op* op1 = new Op(2);
    Op* op2 = new Op(3);
    Pow* test = new Pow(op1,op2);
    EXPECT_EQ(test->stringify(), "2.000000 ** 3.000000");
}

TEST(MockPowEvalTest, MockPowEvaluateNonZero) {
    SevenOpMock* mock1 = new SevenOpMock();
    ThreeOpMock* mock2 = new ThreeOpMock();
    Pow* test = new Pow(mock1, mock2);
    EXPECT_EQ(test->evaluate(), 421.875);
}


TEST(MockPowStringTest, MockPowEvaluateNonZero) {
    SevenOpMock* mock1 = new SevenOpMock();
    ThreeOpMock* mock2 = new ThreeOpMock();
    Pow* test = new Pow(mock1, mock2);
    EXPECT_EQ(test->stringify(), "7.5 ** 3.0");
}

TEST(MockPowNegEvalTest, MockPowEvaluateNonZero) {
    SevenOpMock* mock1 = new SevenOpMock();
    NegThreeOpMock* mock2 = new NegThreeOpMock();
    Pow* test = new Pow(mock1, mock2);
    EXPECT_FLOAT_EQ(test->evaluate(), 0.00237037);
}


TEST(MockPowNegStringTest, MockPowEvaluateNonZero) {
    SevenOpMock* mock1 = new SevenOpMock();
    NegThreeOpMock* mock2 = new NegThreeOpMock();
    Pow* test = new Pow(mock1, mock2);
    EXPECT_EQ(test->stringify(), "7.5 ** -3.0");
}
#endif //__POW_TEST_HPP__
