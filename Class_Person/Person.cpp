#pragma once  
#include <iostream>
using namespace std;

class Person    
{
private:
    string name;  
    int age;
    int weight;

public:
    Person(const Person& pers1);
   
    
    char* getname(); 
    int getage();
    int getweight();
  
    Person operator=(Person op2);
    friend ostream &operator<<(ostream &stream, Person obj); 
    friend istream &operator>>(istream &stream, Person &obj); 


};