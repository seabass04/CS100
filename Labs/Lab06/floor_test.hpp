#ifndef __FLOOR_TEST_HPP__
#define __FLOOR_TEST_HPP__

#include "gtest/gtest.h"
#include "div.hpp"
#include "op.hpp"
#include "floor.hpp"
#include "absolute.hpp"
#include "trunc.hpp"
#include "Ceil.hpp"
#include "paren.hpp"

TEST(FloorTest, PowTest) {
    Op* op1 = new Op(2);
    Op* op2 = new Op(3);
    Pow* test = new Pow(op1,op2);
	Floor* floorTest = new Floor(test);
    EXPECT_EQ(floorTest->evaluate(), 8);
}

TEST(FloorTest, Mult) {
    Op* op1 = new Op(2);
    Op* op2 = new Op(3);
    Mult* test = new Mult(op1,op2);
	Floor* floorTest = new Floor(test);
    EXPECT_EQ(floorTest->evaluate(), 6);
}

TEST(FloorTest, Div) {
    Op* op1 = new Op(2);
    Op* op2 = new Op(3);
    Div* test = new Div(op1,op2);
	Floor* floorTest = new Floor(test);
    EXPECT_EQ(floorTest->evaluate(), 0);
}

TEST(FloorTest, Sub) {
    Op* op1 = new Op(2);
    Op* op2 = new Op(3);
    Sub* test = new Sub(op1,op2);
	Floor* floorTest = new Floor(test);
    EXPECT_EQ(floorTest->evaluate(), -1);
}

TEST(FloorTest, Add) {
    Op* op1 = new Op(2);
    Op* op2 = new Op(3);
    Add* test = new Add(op1,op2);
	Floor* floorTest = new Floor(test);
    EXPECT_EQ(floorTest->evaluate(), 5);
}

/////////////////////////////////////////////////////



TEST(FloorTest, PowTestString) {
    Op* op1 = new Op(2);
    Op* op2 = new Op(3);
    Pow* test = new Pow(op1,op2);
	Floor* floorTest = new Floor(test);
    EXPECT_EQ(floorTest->stringify(), "8.000000");
}

TEST(FloorTest, MultString) {
    Op* op1 = new Op(2);
    Op* op2 = new Op(3);
    Mult* test = new Mult(op1,op2);
	Floor* floorTest = new Floor(test);
    EXPECT_EQ(floorTest->stringify(), "6.000000");
}

TEST(FloorTest, DivString) {
    Op* op1 = new Op(2);
    Op* op2 = new Op(3);
    Div* test = new Div(op1,op2);
	Floor* floorTest = new Floor(test);
    EXPECT_EQ(floorTest->stringify(), "0.000000");
}

TEST(FloorTest, SubString) {
    Op* op1 = new Op(2);
    Op* op2 = new Op(3);
    Sub* test = new Sub(op1,op2);
	Floor* floorTest = new Floor(test);
    EXPECT_EQ(floorTest->stringify(), "-1.000000");
}

TEST(FloorTest, AddString) {
    Op* op1 = new Op(2);
    Op* op2 = new Op(3);
    Add* test = new Add(op1,op2);
	Floor* floorTest = new Floor(test);
    EXPECT_EQ(floorTest->stringify(), "5.000000");
}



/////////////////////////////////////////////////////

TEST(FloorTest, Ceiling) {
    Op* op1 = new Op(2);
    Op* op2 = new Op(3);
    Add* test = new Add(op1,op2);
	Ceil* ceiltest = new Ceil(test);
	Floor* floorTest = new Floor(ceiltest);
    EXPECT_EQ(floorTest->evaluate(), 5);
}

TEST(FloorTest, Absolute) {
    Op* op1 = new Op(-2);
	Absolute* abstest = new Absolute(op1);
	Floor* floorTest = new Floor(abstest);
    EXPECT_EQ(floorTest->evaluate(), 2);
}

TEST(FloorTest, Truncevaluate) {
    Op* op1 = new Op(2);
    Op* op2 = new Op(3);
    Add* test = new Add(op1,op2);
	Trunc* tructest = new Trunc(test);
	Floor* floorTest = new Floor(tructest);
    EXPECT_EQ(floorTest->evaluate(), 5);
} 

TEST(FloorTest, Parenthesis) {
    Op* op1 = new Op(2);
    Op* op2 = new Op(3);
    Add* test = new Add(op1,op2);
	Paren* parenTest = new Paren(test);
	Floor* floorTest = new Floor(parenTest);
    EXPECT_EQ(floorTest->evaluate(), 5);
} 

#endif 
