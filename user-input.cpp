#include <iostream>
int main(){

  std::string name;
  std::cout << "Enter your name : ";
  std::cin >> name ;
  std::cout << "Yo, " << name;

  float length, width;
  std::cout << "\nEnter length of rectangle : ";
  std::cin >> length;
  std::cout << "Enter width of rectangle : ";
  std::cin >> width;
  std::cout << "area : " << length * width;



  return 0;
}