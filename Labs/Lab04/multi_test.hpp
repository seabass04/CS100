#ifndef __MULTI_TEST_HPP__
#define __MULTI_TEST_HPP__

#include "gtest/gtest.h"

#include "base.hpp"

TEST(MultiEvalTest, MultiEvaluateNonZero) {
    Op* op1 = new Op(9);
    Op* op2 = new Op(1);
    Op* op3 = new Op(2);
    Op* op4 = new Op(5);
    Add* testAdd = new Add(op1,op2);
    Sub* testSub = new Sub(op3, op4);
    Mult* testMult = new Mult(testAdd, testSub);
    EXPECT_EQ(testMult->evaluate(), -30.000000);
}

TEST(MultiStringTest, MultiEvaluateNonZero) {
    Op* op1 = new Op(9);
    Op* op2 = new Op(1);
    Op* op3 = new Op(2);
    Op* op4 = new Op(5);
    Add* testAdd = new Add(op1,op2);
    Sub* testSub = new Sub(op3, op4);
    Mult* testMult = new Mult(testAdd, testSub);
    EXPECT_EQ(testMult->stringify(), "9.000000 + 1.000000 * 2.000000 - 5.000000");
}




#endif
