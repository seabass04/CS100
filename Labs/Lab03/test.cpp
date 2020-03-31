#include "c-echo.h"
#include "c-count.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo-count"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo-count";
    EXPECT_EQ("", echo(1,test_val));
}

//new unit test
TEST(CountTest, HelloWorld) {
    std::string test_str = "hello world";
    EXPECT_EQ(2, count(test_str));
}

TEST(CountTest, EmptyString) {
    std::string test_str = "";
    EXPECT_EQ(0, count(test_str));
}

TEST(CountTest, ManySpaces) {
    std::string test_str = "   this   string has     weird   spacing";
    EXPECT_EQ(5, count(test_str));
}

/*
//old unit tests
TEST(EchoTest, Space) {
    char* test_val[2]; test_val[0] = "./c-echo-count"; test_val[1] = " ";
    EXPECT_EQ(" ", echo(2,test_val));
}

TEST(EchoTest, Number) {
    char* test_val[2]; test_val[0] = "./c-echo-count"; test_val[1] = "25";
    EXPECT_EQ("25", echo(2,test_val));
}

TEST(EchoTest, File) {
    char* test_val[2]; test_val[0] = "./c-echo-count"; test_val[1] = "FakeFile.cpp";
    EXPECT_EQ("FakeFile.cpp", echo(2,test_val));
}
*/

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

