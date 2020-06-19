#ifndef __PAREN_TEST_HPP__
#define __PAREN_TEST_HPP__

#include "gtest/gtest.h"
#include "div.hpp"
#include "op.hpp"
#include "floor.hpp"
#include "paren.hpp"
#include "absolute.hpp"
#include "Ceil.hpp"


TEST(ParenTest, PowTest) {
    Op* op1 = new Op(2);
    Op* op2 = new Op(3);
    Pow* test = new Pow(op1,op2);
	Paren* parenTest = new Paren(test);
    EXPECT_EQ(parenTest->stringify(), "(2.000000 ** 3.000000)" );
}

TEST(ParenTest, Mult) {
    Op* op1 = new Op(2);
    Op* op2 = new Op(3);
    Mult* test = new Mult(op1,op2);
	Paren* parenTest = new Paren(test);
    EXPECT_EQ(parenTest->stringify(), "(2.000000 * 3.000000)" );
}

TEST(ParenTest, Div) {
    Op* op1 = new Op(2);
    Op* op2 = new Op(3);
    Div* test = new Div(op1,op2);
	Paren* parenTest = new Paren(test);
    EXPECT_EQ(parenTest->stringify(), "(2.000000 / 3.000000)" );
}

TEST(ParenTest, Sub) {
    Op* op1 = new Op(2);
    Op* op2 = new Op(3);
    Sub* test = new Sub(op1,op2);
	Paren* parenTest = new Paren(test);
    EXPECT_EQ(parenTest->stringify(), "(2.000000 - 3.000000)" );
}

TEST(ParenTest, Add) {
    Op* op1 = new Op(2);
    Op* op2 = new Op(3);
    Add* test = new Add(op1,op2);
	Paren* parenTest = new Paren(test);
    EXPECT_EQ(parenTest->stringify(), "(2.000000 + 3.000000)" );
}

TEST(ParenTest, Floor) {
    Op* op1 = new Op(2);
    Op* op2 = new Op(3);
    Div* test = new Div(op1,op2);
	Floor* floorTest = new Floor(test);
	Paren* parenTest = new Paren(floorTest);
    EXPECT_EQ(parenTest->stringify(), "(0.000000)" );
}

TEST(ParenTest, Ceiling) {
    Op* op1 = new Op(4.5);
    Op* op2 = new Op(2);
    Div* test = new Div(op1,op2);
	Ceil* ceiltest = new Ceil(test);
	Paren* parenTest = new Paren(ceiltest);
    EXPECT_EQ(parenTest->stringify(), "(3.000000)");
}

TEST(ParenTest, Absolute) {
	Op* op1 = new Op(2.5);
	Absolute* abstest = new Absolute(op1);
	Paren* parenTest = new Paren(abstest);
    EXPECT_EQ(parenTest->stringify(), "(2.500000)");
}

TEST(ParenTest, Trunc) {
    Op* op1 = new Op(2);
    Op* op2 = new Op(3);
    Add* test = new Add(op1,op2);
	Trunc* tructest = new Trunc(test);
	Paren* parenTest = new Paren(tructest);
	EXPECT_EQ(parenTest->stringify(), "(5.000000)");
}

//////////////////////////////////////////////////////////////

TEST(ParenTest, PowTestVal) {
    Op* op1 = new Op(2);
    Op* op2 = new Op(3);
    Pow* test = new Pow(op1,op2);
	Paren* parenTest = new Paren(test);
    EXPECT_EQ(parenTest->evaluate(), 8.000000 );
}

TEST(ParenTest, MultVal) {
    Op* op1 = new Op(2);
    Op* op2 = new Op(3);
    Mult* test = new Mult(op1,op2);
	Paren* parenTest = new Paren(test);
    EXPECT_EQ(parenTest->evaluate(), 6.000000);
}

TEST(ParenTest, DivVal) {
    Op* op1 = new Op(6);
    Op* op2 = new Op(3);
    Div* test = new Div(op1,op2);
	Paren* parenTest = new Paren(test);
    EXPECT_EQ(parenTest->evaluate(), 2.000000);
}

TEST(ParenTest, SubVal) {
    Op* op1 = new Op(2);
    Op* op2 = new Op(3);
    Sub* test = new Sub(op1,op2);
	Paren* parenTest = new Paren(test);
    EXPECT_EQ(parenTest->evaluate(), -1.000000 );
}

TEST(ParenTest, AddVal) {
    Op* op1 = new Op(2);
    Op* op2 = new Op(3);
    Add* test = new Add(op1,op2);
	Paren* parenTest = new Paren(test);
    EXPECT_EQ(parenTest->evaluate(), 5.000000 );
}

TEST(ParenTest, FloorVal) {
    Op* op1 = new Op(2);
    Op* op2 = new Op(3);
    Div* test = new Div(op1,op2);
	Floor* floorTest = new Floor(test);
	Paren* parenTest = new Paren(floorTest);
    EXPECT_EQ(parenTest->evaluate(), 0.000000 );
}

TEST(ParenTest, CeilingVal) {
    Op* op1 = new Op(4.5);
    Op* op2 = new Op(2);
    Div* test = new Div(op1,op2);
	Ceil* ceiltest = new Ceil(test);
	Paren* parenTest = new Paren(ceiltest);
    EXPECT_EQ(parenTest->evaluate(), 3.000000);
}

TEST(ParenTest, AbsoluteVal) {
	Op* op1 = new Op(2.5);
	Absolute* abstest = new Absolute(op1);
	Paren* parenTest = new Paren(abstest);
    EXPECT_EQ(parenTest->evaluate(), 2.500000);
}

TEST(ParenTest, TruncVal) {
    Op* op1 = new Op(2);
    Op* op2 = new Op(3);
    Add* test = new Add(op1,op2);
	Trunc* tructest = new Trunc(test);
	Paren* parenTest = new Paren(tructest);
	EXPECT_EQ(parenTest->evaluate(), 5.000000);
}






#endif //__PAREN_TEST_HPP__