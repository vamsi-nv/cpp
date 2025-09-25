#include <iostream>
using namespace std;

struct student
{
  string name;
  int age;
  char grade;
};

int main()
{

  student s = {"nv", 18, 'A'};
  cout << s.name << endl;
  cout << s.age << endl;
  cout << s.grade << endl;

  cout << &s;
  return 0;
}