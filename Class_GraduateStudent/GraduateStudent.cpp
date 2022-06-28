#include "Student.h"
#include "GraduateStudent.h"

#include <iostream>
using namespace std;

GraduateStudent :: ~GraduateStudent()
{
    cout<<"Inside Destructor GraduateStudent";
    percent = 0;
    DiplomWorkName = ' ';
}

/*
void GraduateStudent::setStudent(long id, string firstname, string lastname, string surname, int cource, int rating)
{
    this ->ID = id;
    this ->cource = cource;
    this ->rating = rating;
    this ->firstname = firstname;
    this ->lastname = lastname;
    this ->surname = surname;
}
*/
string GraduateStudent::getDiplomWorkName()
{
    return DiplomWorkName;
}

int GraduateStudent::getPercent()
{
    return percent;
}

void GraduateStudent::setDiplomWorkName(string p_DiplomWorkName)
{
    this -> DiplomWorkName= p_DiplomWorkName;
}

void GraduateStudent::setPercent(int p_Percent)
{
    this -> percent = p_Percent;
}

