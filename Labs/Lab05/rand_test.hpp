#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"

#include "Rand.hpp"

TEST(RandEvalTest, RandEvaluateNonZero) {
    Rand* test = new Rand();
    EXPECT_EQ(test->evaluate(), 83 );
}
TEST(RandEvalTest, RandEvaluateNonZeroStringify) {
    Rand* test = new Rand();
    EXPECT_EQ(test->stringify(), "86.000000" );
}

#endif 
