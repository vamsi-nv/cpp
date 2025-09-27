// virtual - checks the actual object the pointer is pointing to. otherwise - based on the pointer type
#include <iostream>
using namespace std;

class Animal
{
public:
  // without virtual - "Animal makes sound"
  // with virtual - "Bow Bow"
  virtual void makeSound()
  {
    cout << "Animal makes sound.\n";
  }
};

class Dog : public Animal
{
public:
  void makeSound()
  {
    cout << "Bow Bow\n";
  }
};

int main()
{
  Animal *a;
  Dog d;
  a = &d;
  a->makeSound();
  return 0;
}