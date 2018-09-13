/*
Test cases for testing my implementations of specific algorithms.
E.g. coding quicksort from scratch then running a set of test cases
against it
*/

#include "gtest/gtest.h"


TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}


//How to write a set of test cases that I can use to test all implementations
//of a specific algorithm? For example, I might write 8 quicksort implementations,
//but I only want to use a single set of tests to test all of them.

//Use value parameterized tests:
//https://github.com/google/googletest/blob/master/googletest/docs/advanced.md#value-parameterized-tests

//Fixtures
class QuicksortTest : public ::testing::TestWithParam<const char*>
{

};