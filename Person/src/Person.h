#include <iostream>
#include <string>

using namespace std;

class Person
{
public: //Public data members.
  Person(string myName, int myAge);
  string getName();
  int getAge();
  void setName(string newName);
  void setAge(int newAge);
  void display();

private: //Private data members.
  string name;
  int age;
};
