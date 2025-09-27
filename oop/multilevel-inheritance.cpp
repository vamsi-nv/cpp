#include <iostream>
using namespace std;

class MyClass
{
public:
  void myFunction()
  {
    cout << "Some content in the parent class\n";
  }
};

class MyChild : public MyClass
{
public:
  void childFunction()
  {
    cout << "Some content in the child class\n";
  }
};

class MyGrandChild : public MyChild
{
public:
  void grandChildFunction()
  {
    cout << "Some content in the grand child\n";
  }
};

int main()
{
  MyClass myObj;
  MyChild myChildObj;
  MyGrandChild myGrandChildObj;
  myObj.myFunction();
  myChildObj.childFunction();
  myGrandChildObj.grandChildFunction();
  myGrandChildObj.myFunction();

  return 0;
}