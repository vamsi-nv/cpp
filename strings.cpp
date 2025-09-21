#include <iostream>
#include <string>
using namespace std;

int main(){

  string greeting = "Hello";
  string name = "Vroot";

  cout << greeting + " " + name + "\n";
  cout << greeting.append(" Elon Musk\n");
  cout << greeting.length();
  cout << "\n" << greeting[0];
  cout << "\n" << greeting[greeting.length() - 2];

  string fullname;
  cout << "\nEnter your fullname : ";
  getline(cin, fullname);
  cout << fullname;

  return 0;
}