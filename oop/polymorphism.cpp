#include <iostream>
using namespace std;

class Animal
{
public:
  void animalSound()
  {
    cout << "The animal makes a sound\n";
  }
};

class Dog : public Animal
{
public:
  void animalSound()
  {
    cout << "Bow Bow\n";
  }
};

int main()
{
  Dog d;
  d.animalSound();

  return 0;
}