#include <iostream>
using namespace std;

class Book
{
public:
  string title;
  string author;
  int year;
};

class Dog
{
public:
  Dog()
  {
    cout << "Bow Bow\n";
  }
  void bark()
  {
    cout << "Woof!\n";
  }
};

class Car
{
private:
  string owner; // accessible only inside the class. (all are private by default)

public: // accessible outside the class
  string company;
  string model;
  int year;

  Car()
  { // default values if nothing is provided
    owner = "Secret owner";
    company = "unknown";
    model = "unknown";
    year = 2000;
  }

  Car(string company, string model, int year, string owner) // overloading constructor
  {
    this->company = company;
    this->model = model;
    this->year = year;
    this->owner = owner;
  }

  void getDetails()
  {
    cout << this->owner << endl;
    cout << this->company << endl;
    cout << this->model << endl;
    cout << this->year << endl;
  }

  friend void setOwner(Car &car, string owner);
};

void setOwner(Car &car, string owner)
{
  car.owner = owner;
}

int main()
{
  Book book1;
  book1.title = "Laws of Human Nature";
  book1.author = "Robert Greene";
  book1.year = 2025; // not real

  cout << book1.title << endl;
  cout << book1.author << endl;
  cout << book1.year << endl;

  Dog dog;
  dog.bark();

  Car car1("lambo", "urus", 2014, "nv");
  car1.getDetails();
  setOwner(car1, "elon musk");
  car1.getDetails();
  return 0;
}
