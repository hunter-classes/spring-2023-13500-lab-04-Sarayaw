#include <iostream>
#include "funcs.h"
#include <string>

int main ()
{
  std::cout << "\n" << "Task A:" << "\n";
  std::cout << "\n------------------\n";
  std::cout << box(5,7);
  std::cout << "\n------------------\n";
  std::cout << box(18,28);
  std::cout << "\n------------------\n";
 
  std::cout << "\n" << "Task B:" << "\n";
  std::cout << "\n------------------\n";
  std::cout << checkerboard(5,1);
  std::cout << "\n------------------\n";
  std::cout << checkerboard(14,15);
  std::cout << "\n------------------\n";

  std::cout << "\n" << "Task C:" << "\n";
  std::cout << "\n------------------\n";
  std::cout << cross(10);
  std::cout << "\n------------------\n";
  std::cout << cross(15);
  std::cout << "\n------------------\n";
  
  std::cout << "\n" << "Task D" << "\n";
  std::cout << "\n------------------\n";
  std::cout << lower(8);
  std::cout << "\n------------------\n";
  std::cout << lower(11);
  std::cout << "\n------------------\n";

  std::cout << "\n" << "Task E:" << "\n";
  std::cout << "\n------------------\n";
  std::cout << upper(4);
  std::cout << "\n------------------\n";
  std::cout << upper(5);
  std::cout << "\n------------------\n";
 
  std::cout << "\n" << "Task F:" << "\n";
  std::cout << "\n------------------\n";
  std::cout << trapezoid(12,5);
  std::cout << "\n------------------\n";
  std::cout << trapezoid(13,9);
  std::cout << "\n------------------\n";

  std::cout << "\n" << "Task G:" << "\n";
  std::cout << "\n------------------\n";
  std::cout << checkerboard3x3(24,24);
  std::cout << "\n------------------\n";
  std::cout << checkerboard3x3(6,12);
  std::cout << "\n------------------\n";
  
}
