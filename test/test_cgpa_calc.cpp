#include "../include/cgpa_calc.hpp"
#include <gtest/gtest.h>
//#include <gmock/gmock.h>

TEST(CgpaTest, correctCgpa)
{
  cgpa_calc cc;
  cc.setMarks(90, 90, 90, 90);
  EXPECT_EQ(cc.calculateCGPA(), 9);
}

TEST(CgpaTest, incorrectCgpa)
{
  cgpa_calc cc;
  cc.setMarks(80, 40, 40, 80);
  EXPECT_NE(cc.calculateCGPA(), 10);
}
