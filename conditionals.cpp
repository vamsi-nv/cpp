#include <iostream>
using namespace std;

int main()
{

  int age;
  string name;
  cout << "Enter your name : ";
  getline(cin, name);
  cout << "Enter your age : ";
  cin >> age;

  cout << "Hello, " + name;
  if (age >= 18)
  {
    cout << "\nYou're eligible to vote";
  }
  else
  {
    cout << "\nYou're not eligible to vote";
  }

  string result = age >= 18 ? "Vote for NOTA" : "Grow up kid";
  cout << "\n" + result;

  // same if-else, switch as C 🥱

  return 0;
}