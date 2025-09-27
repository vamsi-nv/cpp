#include <iostream>
using namespace std;

class Employee
{
protected:
  int salary;
};

class Programmer : public Employee
{
public:
  int bonus;
  void setSalary(int s)
  {
    salary = s;
  }
  int getSalary()
  {
    return salary;
  }
};

int main()
{
  Programmer bjarne;
  bjarne.setSalary(690000);
  bjarne.getSalary();

  cout << "Salary : " << bjarne.getSalary() << "\n";
  cout << "Bonus : " << bjarne.bonus << "\n";
  return 0;
}