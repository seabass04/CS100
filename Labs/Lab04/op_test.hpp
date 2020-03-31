#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"

TEST(OpEvalTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(OpStringTest, OpEvaluateNonZero) {
    Op* test = new Op(9);
    EXPECT_EQ(test->stringify(), "9.000000");
}

TEST(Test7EvalTest, OpEvaluateNonZero) {
   SevenOpMock* test = new  SevenOpMock(); 
   EXPECT_EQ(test->evaluate(), 7.5);
}

TEST(Test7StringTest, OpEvaluateNonZero) {
   SevenOpMock* test = new  SevenOpMock();
   EXPECT_EQ(test->stringify(), "7.5");
}

TEST(Test3EvalTest, OpEvaluateNonZero) {
   ThreeOpMock* test = new  ThreeOpMock();
   EXPECT_EQ(test->evaluate(), 3.0);
}

TEST(Test3StringTest, OpEvaluateNonZero) {
   ThreeOpMock* test = new  ThreeOpMock();
   EXPECT_EQ(test->stringify(), "3.0"); 
}


#endif //__OP_TEST_HPP__
