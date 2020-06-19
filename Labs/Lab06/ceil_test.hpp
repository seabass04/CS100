#ifndef __CEIL_TEST__
#define __CEIL_TEST__


#include "gtest/gtest.h"
#include "div.hpp"
#include "op.hpp"
#include "Ceil.hpp"
#include "floor.hpp"

//
TEST(Ceilingevaluate, ceiltestdiv) {
    Op* op1 = new Op(4.5);
    Op* op2 = new Op(2);
    Div* test = new Div(op1,op2);
	Ceil* ceiltest = new Ceil(test);
	
    EXPECT_EQ(ceiltest->evaluate(), 3);
}

TEST(Ceilingevaluate, ceiltestmult) {
   Op* op1 = new Op(5.2);
   Op* op2 = new Op(2.3); 
   Mult* test = new Mult(op1,op2);
   Ceil* ceiltest = new Ceil(test);

   EXPECT_EQ(ceiltest->evaluate(), 12.0);
}

TEST(Ceilingevaluate, ceiltestpow) {
    Op* op1 = new Op(2);
    Op* op2 = new Op(3.5);
    Pow* test = new Pow(op1,op2);
	Ceil* ceiltest = new Ceil(test);

    EXPECT_EQ(ceiltest->evaluate(), 12);
}

TEST(Ceilingevaluate, ceiltestadd) {
    Op* op1 = new Op(8);
    Op* op2 = new Op(2.3);
    Add* test = new Add(op1,op2);
	Ceil* ceiltest = new Ceil(test);
	
	EXPECT_EQ(ceiltest->evaluate(), 11);
}

TEST(Ceilingevaluate, ceiltestsub) {
    Op* op1 = new Op(8);
    Op* op2 = new Op(2.3);
    Sub* test = new Sub(op1,op2);
	Ceil* ceiltest = new Ceil(test);
	
	EXPECT_EQ(ceiltest->evaluate(), 6);
}

TEST(Ceilingstring, ceiltestdiv) {
    Op* op1 = new Op(4.5);
    Op* op2 = new Op(2);
    Div* test = new Div(op1,op2);
	Ceil* ceiltest = new Ceil(test);
	
    EXPECT_EQ(ceiltest->stringify(), "3.000000");
}

TEST(Ceilingstring, ceiltestmult) {
   Op* op1 = new Op(5.2);
   Op* op2 = new Op(2.3); 
   Mult* test = new Mult(op1,op2);
   Ceil* ceiltest = new Ceil(test);

   EXPECT_EQ(ceiltest->stringify(), "12.000000");
}

TEST(Ceilingstring, ceiltestpow) {
    Op* op1 = new Op(2);
    Op* op2 = new Op(3.5);
    Pow* test = new Pow(op1,op2);
	Ceil* ceiltest = new Ceil(test);

    EXPECT_EQ(ceiltest->stringify(), "12.000000");
}

TEST(Ceilingstring, ceiltestadd) {
    Op* op1 = new Op(8);
    Op* op2 = new Op(2.3);
    Add* test = new Add(op1,op2);
	Ceil* ceiltest = new Ceil(test);
	
	EXPECT_EQ(ceiltest->stringify(), "11.000000");
}

TEST(Ceilingstring, ceiltestsub) {
    Op* op1 = new Op(8);
    Op* op2 = new Op(2.3);
    Sub* test = new Sub(op1,op2);
	Ceil* ceiltest = new Ceil(test);
	
	EXPECT_EQ(ceiltest->stringify(), "6.000000");
}
/////////////////////////////////////////////////////

TEST(CeilingTest, Floor) {
    Op* op1 = new Op(2);
    Op* op2 = new Op(3);
    Add* test = new Add(op1,op2);
	Floor* floorTest = new Floor(test);
	Ceil* ceiltest = new Ceil(floorTest);
    EXPECT_EQ(floorTest->evaluate(), 5);
}







#endif
