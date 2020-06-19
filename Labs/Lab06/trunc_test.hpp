#ifndef __TRUNC_TEST_HPP
#define __TRUNC_TEST_HPP

#include "gtest/gtest.h"
#include "trunc.hpp"


TEST(Truncevaluate, addtest) {
    Op* op1 = new Op(8);
    Op* op2 = new Op(2);
    Add* test = new Add(op1,op2);
	Trunc* trunctest = new Trunc(test);

	EXPECT_EQ(trunctest->evaluate(), 10);
}

TEST(Truncstring, addtest) {
    Op* op1 = new Op(8);
    Op* op2 = new Op(2);
    Add* test = new Add(op1,op2);
	Trunc* trunctest = new Trunc(test);

	EXPECT_EQ(trunctest->stringify(), "10.000000");
}

TEST(Truncevaluate, subtest) {
    Op* op1 = new Op(10);
    Op* op2 = new Op(5);
    Sub* test = new Sub(op1,op2);
	Trunc* trunctest = new Trunc(test);

	EXPECT_EQ(trunctest->evaluate(), 5);
}

TEST(Truncstring, subtest) {
    Op* op1 = new Op(10);
    Op* op2 = new Op(5);
    Sub* test = new Sub(op1,op2);
	Trunc* trunctest = new Trunc(test);

	EXPECT_EQ(trunctest->stringify(), "5.000000");
}

TEST(Truncevaluate, divtest) {
    Op* op1 = new Op(20);
    Op* op2 = new Op(10);
    Div* test = new Div(op1,op2);
	Trunc* trunctest = new Trunc(test);

	EXPECT_EQ(trunctest->evaluate(), 2);
}

TEST(Truncstring, divtest) {
    Op* op1 = new Op(20);
    Op* op2 = new Op(10);
    Div* test = new Div(op1,op2);
	Trunc* trunctest = new Trunc(test);

	EXPECT_EQ(trunctest->stringify(), "2.000000");
}

TEST(Truncevaluate, multest) {
    Op* op1 = new Op(5);
    Op* op2 = new Op(2);
    Mult* test = new Mult(op1,op2);
	Trunc* trunctest = new Trunc(test);

	EXPECT_EQ(trunctest->evaluate(), 10);
}

TEST(Truncstring, multtest) {
    Op* op1 = new Op(5);
    Op* op2 = new Op(2);
    Mult* test = new Mult(op1,op2);
	Trunc* trunctest = new Trunc(test);

	EXPECT_EQ(trunctest->stringify(), "10.000000");
}

//
#endif
