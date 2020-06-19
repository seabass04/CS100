#ifndef __FACTORY_TEST_HPP__
#define __FACTORY_TEST_HPP__

#include "gtest/gtest.h"
#include <vector>
#include "Factory.hpp"
#include "Rand.hpp"
#include <cstring>


TEST(FactoryEvalTest, noOperator) {
    char *userinput[1] = {"./calculator"};
	Factory* factory = new Factory();
	Base* parsed = factory->parse(userinput, 1);
    EXPECT_EQ(parsed, nullptr);
}

TEST(FactoryEvalTest, singleOperator) {
    char *userinput[4] = {"./calculator","7", "+", "3"};
	Factory* factory = new Factory();
	Base* parsed = factory->parse(userinput, 4);
    EXPECT_EQ(parsed->evaluate(), 10);
}

TEST(FactoryEvalTest, twoOperators) {
    char *userinput[6] = {"./calculator","7", "+", "3", "-", "4"};
	Factory* factory = new Factory();
	Base* parsed = factory->parse(userinput, 6);
    EXPECT_EQ(parsed->evaluate(), 6);
}

TEST(FactoryEvalTest, threeOperators) {
    char *userinput[8] = {"./calculator","7", "+", "3", "-","4", "*", "4"};
	Factory* factory = new Factory();
	Base* parsed = factory->parse(userinput, 8);
    EXPECT_EQ(parsed->evaluate(), 24);
}

TEST(FactoryEvalTest, fourOperators) {
    char *userinput[10] = {"./calculator","7", "+", "3", "-","4", "*", "4", "/", "8"};
	Factory* factory = new Factory();
	Base* parsed = factory->parse(userinput, 10);
    EXPECT_EQ(parsed->evaluate(), 3);
}

TEST(FactoryEvalTest, fiveOperators) {
    char *userinput[12] = {"./calculator","7", "+", "3", "-","4", "*", "4", "/", "8", "**", "2"};
	Factory* factory = new Factory();
	Base* parsed = factory->parse(userinput, 12);
    EXPECT_EQ(parsed->evaluate(), 9);
}


TEST(FactoryEvalTest, singleOperatorRand) {
	char randArr[2];
	Rand* rand = new Rand();
	strcpy(randArr, rand->stringify().c_str());
    char *userinput[4] = {"./calculator","7", "+", randArr};
	Factory* factory = new Factory();
	Base* parsed = factory->parse(userinput, 4);
    EXPECT_EQ(parsed->evaluate(), 84);
}

///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////

TEST(FactoryEvalTest, noOperatorString) {
    char *userinput[1] = {"./calculator"};
	Factory* factory = new Factory();
	Base* parsed = factory->parse(userinput, 1);
    EXPECT_EQ(parsed, nullptr);
}

TEST(FactoryEvalTest, singleOperatorString) {
    char *userinput[4] = {"./calculator","7", "+", "3"};
	Factory* factory = new Factory();
	Base* parsed = factory->parse(userinput, 4);
    EXPECT_EQ(parsed->stringify(), "7.000000 + 3.000000");
}

TEST(FactoryEvalTest, twoOperatorsString) {
    char *userinput[6] = {"./calculator","7", "+", "3", "-", "4"};
	Factory* factory = new Factory();
	Base* parsed = factory->parse(userinput, 6);
    EXPECT_EQ(parsed->stringify(), "7.000000 + 3.000000 - 4.000000");
}

TEST(FactoryEvalTest, threeOperatorsString) {
    char *userinput[8] = {"./calculator","7", "+", "3", "-","4", "*", "4"};
	Factory* factory = new Factory();
	Base* parsed = factory->parse(userinput, 8);
    EXPECT_EQ(parsed->stringify(), "7.000000 + 3.000000 - 4.000000 * 4.000000");
}

TEST(FactoryEvalTest, fourOperatorsString) {
    char *userinput[10] = {"./calculator","7", "+", "3", "-","4", "*", "4", "/", "8"};
	Factory* factory = new Factory();
	Base* parsed = factory->parse(userinput, 10);
    EXPECT_EQ(parsed->stringify(), "7.000000 + 3.000000 - 4.000000 * 4.000000 / 8.000000");
}

TEST(FactoryEvalTest, fiveOperatorsString) {
    char *userinput[12] = {"./calculator","7", "+", "3", "-","4", "*", "4", "/", "8", "**", "2"};
	Factory* factory = new Factory();
	Base* parsed = factory->parse(userinput, 12);
    EXPECT_EQ(parsed->stringify(), "7.000000 + 3.000000 - 4.000000 * 4.000000 / 8.000000 ** 2.000000");
}


TEST(FactoryEvalTest, singleOperatorRandString) {
	char randArr[2];
	Rand* rand = new Rand();
	strcpy(randArr, rand->stringify().c_str());
    char *userinput[4] = {"./calculator","7", "+", randArr};
	Factory* factory = new Factory();
	Base* parsed = factory->parse(userinput, 4);
    EXPECT_EQ(parsed->stringify(), "7.000000 + 15.000000");
}





#endif