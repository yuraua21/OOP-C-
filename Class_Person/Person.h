#include "Person.h"
using namespace std;


Person::Person() 
{
    name = "";  
    int age = 0;
    int weight=0;
}


Person::Person(const Person& pers1) {
    Person(pers1.name, pers1.age, pers1.weight);
{
}





string Person::getname() 
    return name;
}

int Person::getage() 
{
    return age;
}

int Person::getweight() 
{
    return weight;
}



Person Person::operator=(Person op2) 
{
    name = op2.name;
    age = op2.age;
    weight = op2.weight;

    return *this;
}


ostream &operator<<(ostream &stream, Person obj) 
{ 
  stream << "Name : " << obj.name << ", ";
  stream << "Age : " << obj.age << ", ";
  stream << "Weight : " << obj.weight << " \n ";

  return stream; 
}

istream &operator>>(istream &stream, Person &obj) 
{
  cout << "Enter name, age, weight: ";
  stream >> obj.name >> obj.age >> obj.weight >>;

  return stream;
}
