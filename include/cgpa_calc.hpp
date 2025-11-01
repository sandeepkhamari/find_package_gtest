#include <iostream>

class cgpa_calc
{
   public:
      double getCGPA(void);
      double calculateCGPA(void);
      void setMarks(int maths, int phy, int chem, int eng);

   protected:
      double maths, physics, chemistry, english, cgpa;
};
