#include <iostream>
#include <string>

int main(){

  int i = 10;
  float f = 20.343;
  char c = 'V';
  double d = 232.42321212;
  bool isStudent = false;
  std::string str = "Vroot";

  std::cout << i <<"\n";
  std::cout << f <<"\n";
  std::cout << d <<"\n";
  std::cout << c <<"\n";
  std::cout << str <<"\n";
  std::cout << "isStudent : " << isStudent <<"\n"; // true = 1; false = 0

  int a = 1, b = 2;
  std::cout << a+b << "\n";


  // constants
  const float PI = 3.14;
  std::cout << PI << "\n";



  return 0;
}