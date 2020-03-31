#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"

#include "sub.hpp"

TEST(SubEvalTest, SubEvaluateNonZero) {
    Op* op1 = new Op(10);
    Op* op2 = new Op(2);
    Sub* test = new Sub(op1,op2);
    EXPECT_EQ(test->evaluate(), 8.000000);
}

TEST(SubtringTest, SubEvaluateNonZero) {
    Op* op1 = new Op(10);
    Op* op2 = new Op(2);
    Sub* test = new Sub(op1,op2);
    EXPECT_EQ(test->stringify(), "10.000000 - 2.000000");
}
TEST(MockSubEvalTest, MockSubEvaluateNonZero) {
    SevenOpMock* mock1 = new SevenOpMock();
    ThreeOpMock* mock2 = new ThreeOpMock();
    Sub* test = new Sub(mock1, mock2);
    EXPECT_EQ(test->evaluate(), 4.5);
}


TEST(MockSubStringTest, MockSubEvaluateNonZero) {
    SevenOpMock* mock1 = new SevenOpMock();
    ThreeOpMock* mock2 = new ThreeOpMock();
    Sub* test = new Sub(mock1, mock2);
    EXPECT_EQ(test->stringify(), "7.5 - 3.0");
}

TEST(MockSubNegEvalTest, MockSubEvaluateNonZero) {
    SevenOpMock* mock1 = new SevenOpMock();
    NegThreeOpMock* mock2 = new NegThreeOpMock();
    Sub* test = new Sub(mock1, mock2);
    EXPECT_EQ(test->evaluate(), 10.5);
}


TEST(MockSubNegStringTest, MockSubEvaluateNonZero) {
    SevenOpMock* mock1 = new SevenOpMock();
    NegThreeOpMock* mock2 = new NegThreeOpMock();
    Sub* test = new Sub(mock1, mock2);
    EXPECT_EQ(test->stringify(), "7.5 - -3.0");
}
#endif //__SUB_TEST_HPP__
