#include "gtest/gtest.h"

#include "op_test.hpp"
#include "rand_test.hpp"
#include "add_test.hpp"
#include "sub_test.hpp"
#include "mult_test.hpp" 
#include "div_test.hpp"
#include "pow_test.hpp"
#include "multi_test.hpp"
#include "vecContainer_test.hpp"
#include "listContainer_test.hpp"
#include "ceil_test.hpp"
#include "floor_test.hpp"
#include "paren_test.hpp"
#include "absolute_test.hpp"
#include "trunc_test.hpp"
#include "factory_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
