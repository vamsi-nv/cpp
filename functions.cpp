#include <iostream>
using namespace std;

void printHello(){
  cout << "Hello funcs!" << endl;
}

int add(int a, int b){
  return a + b;
}

void sayHello(string name = "guest"){ // default parameters
  cout << "Hello, " + name << endl;  
}

void changeValue(int &num){ // pass by reference
  num = 50;
}

void swapTwoNums(int &num1, int &num2){
  int temp = num1;
  num1 = num2;
  num2 = temp;
}



int main(){

  printHello();
  int sum = add(10, 20);
  cout << sum << endl;
  sayHello();
  sayHello("nv");

  int value = 10;
  cout << value << endl;
  changeValue(value);
  cout << value << endl;


  int num1 = 100, num2 = 200;
  cout << num1 << " " << num2 << endl;
  swapTwoNums(num1, num2);
  cout << num1 << " " << num2 << endl;

  return 0;
}
