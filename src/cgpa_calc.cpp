#include "../include/cgpa_calc.hpp"

double cgpa_calc::getCGPA(void)
{
   return cgpa;
}

double cgpa_calc::calculateCGPA(void)
{
   cgpa= (maths+physics+chemistry+english)/40;
   return cgpa;
}

void cgpa_calc::setMarks(double m, double p, double c, double e)
{
   maths= m;
   physics= p;
   chemistry= c;
   english= e;
}
