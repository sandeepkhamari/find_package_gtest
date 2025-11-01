#include "../include/cgpa_calc.hpp"

int main()
{
  cgpa_calc cc;
  cc.setMarks(90,90,90,90); 
  std::cout<<cc.calculateCGPA()<<std::endl;
  return 0;
}
