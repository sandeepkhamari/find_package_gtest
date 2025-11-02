#include <iostream>

class cgpa_calc
{
   public:
      double getCGPA(void);
      double calculateCGPA(void);
      void setMarks(double maths, double phy, double chem, double eng);

   protected:
      double maths, physics, chemistry, english, cgpa;
};
