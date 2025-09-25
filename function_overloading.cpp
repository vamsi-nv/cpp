// same name, but differ in parameter type of paramenter number
#include <iostream>
using namespace std;

int plusFunc(int x, int y){
  return x+y;
}

double plusFunc(double x, double y){
  return x+y;
}

int main(){

  int a, b;
  double x, y;
  cout << "Enter a - int number : ";
  cin >> a;
  cout << "Enter b - int number : ";
  cin >> b;

  cout << "Enter x - double number : ";
  cin >> x;
  cout << "Enter y - double number : ";
  cin >> y;

  cout << plusFunc(a, b) << endl;
  cout << plusFunc(x, y) << endl;
  

  return 0;
}
