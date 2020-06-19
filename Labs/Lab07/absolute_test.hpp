#ifndef __ABS_TEST_HPP
#define __ABS_TEST_HPP


#include "gtest/gtest.h"
#include "absolute.hpp"


TEST(Absoluteevaluate, posint) {
    Op* op1 = new Op(2);
	Absolute* abstest = new Absolute(op1);
	
    EXPECT_EQ(abstest->evaluate(), 2);
}

TEST(Absoluteevaluate, posfloat) {
    Op* op1 = new Op(2.37);
	Absolute* abstest = new Absolute(op1);
	
    EXPECT_EQ(abstest->evaluate(), 2.37);
}

TEST(Absoluteevaluate, negint) {
    Op* op1 = new Op(-73);
	Absolute* abstest = new Absolute(op1);
	
    EXPECT_EQ(abstest->evaluate(), 73);
}
TEST(Absoluteevaluate, negfloat) {
    Op* op1 = new Op(-12.92);
	Absolute* abstest = new Absolute(op1);
	
    EXPECT_EQ(abstest->evaluate(), 12.92);
}


TEST(Absoluteevaluate, negceiling) {//test with ceiling
    Op* op1 = new Op(-12.92);
	Ceil* ceiltest = new Ceil(op1);
	Absolute* abstest = new Absolute(ceiltest);
	
    EXPECT_EQ(abstest->evaluate(), 12);
}

TEST(Absoluteevaluate, negceiling2) {//test with ceiling
    Op* op1 = new Op(12.33);
	Ceil* ceiltest = new Ceil(op1);
	Absolute* abstest = new Absolute(ceiltest);
	
    EXPECT_EQ(abstest->evaluate(), 13);
}

TEST(Absoluteevaluate, flortest) {//test with floor
    Op* op1 = new Op(1.06);
	Floor* floortest = new Floor(op1);
	Absolute* abstest = new Absolute(floortest);
	
    EXPECT_EQ(abstest->evaluate(), 1);
}

TEST(Absoluteevaluate, Parenthesis) {
    Op* op1 = new Op(-2);
    Op* op2 = new Op(-3);
    Add* test = new Add(op1,op2);
	Paren* parenTest = new Paren(test);
	Absolute* abstest = new Absolute(parenTest);
    EXPECT_EQ(abstest->evaluate(), 5);
} 

TEST(Absoluteevaluate, Parenthesis2) {
    Op* op1 = new Op(-2);
    Op* op2 = new Op(10);
    Add* test = new Add(op1,op2);
	Paren* parenTest = new Paren(test);
	Absolute* abstest = new Absolute(parenTest);
    EXPECT_EQ(abstest->evaluate(), 8);
} 




/////

TEST(Absolutestringify, posint) {
    Op* op1 = new Op(2);
	Absolute* abstest = new Absolute(op1);
	
    EXPECT_EQ(abstest->stringify(), "2.000000");
}

TEST(Absolutestringify, posfloat) {
    Op* op1 = new Op(2.37);
	Absolute* abstest = new Absolute(op1);
	
    EXPECT_EQ(abstest->stringify(), "2.370000");
}

TEST(Absolutestringify, negint) {
    Op* op1 = new Op(-73);
	Absolute* abstest = new Absolute(op1);
	
    EXPECT_EQ(abstest->stringify(), "73.000000");
}
TEST(Absolutestringify, negfloat) {
    Op* op1 = new Op(-12.92);
	Absolute* abstest = new Absolute(op1);
	
    EXPECT_EQ(abstest->stringify(), "12.920000");
}

TEST(Absolutestringify, negceiling) {//test with ceiling
    Op* op1 = new Op(-12.92);
	Ceil* ceiltest = new Ceil(op1);
	Absolute* abstest = new Absolute(ceiltest);
	
    EXPECT_EQ(abstest->stringify(), "12.000000");
}

TEST(Absolutestringify, negceiling2) {//test with ceiling
    Op* op1 = new Op(-30.01);
	Ceil* ceiltest = new Ceil(op1);
	Absolute* abstest = new Absolute(ceiltest);
	
    EXPECT_EQ(abstest->stringify(), "30.000000");
}

TEST(Absolutestringify, flortest) {//test with ceiling
    Op* op1 = new Op(1.06);
	Floor* floortest = new Floor(op1);
	Absolute* abstest = new Absolute(floortest);
	
    EXPECT_EQ(abstest->stringify(), "1.000000");
}




#endif
