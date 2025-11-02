#include "../include/cgpa_calc.hpp"
#include <gtest/gtest.h>

TEST(cgpaTest, testSuccess)
{
   cgpa_calc cc;
   double m=34.0, p= 34.0, c= 34.0, e= 34.0;
   cc.setMarks(m,p,c,e);
   double cgpa= cc.calculateCGPA();
   ASSERT_EQ(cgpa, 3.4);
}

TEST(cgpaTest, testFailure)
{
   cgpa_calc cc;
   double m=67.0, p=68.0, c=69.0, e=70.0;
   cc.setMarks(m,p,c,e);
   double cgpa= cc.calculateCGPA();
   ASSERT_NE(cgpa, 7.0);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
