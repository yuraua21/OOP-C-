#include "Student.h"
#include <iostream>
using namespace std;

Student :: Student()
{
    ID = 0;
    cource = 0;
    rating = 0;
    firstname = ' ';
    lastname = ' ';
    surname = ' ';
}



    Student::Student(const Student& pers1) {
    Student(pers1.firstname, pers1.lastname, pers1.surname);
    {
    }



Student :: Student(long id, string firstname, string lastname, string surname, int cource, int rating)
    :ID(id)
    , cource(cource)
    , rating(rating)
    , firstname(firstname)
    , lastname(lastname)
    , surname(surname)

{
    
}

    // Copy constructor
Student::Student(const Student& stud1) {
    Student(stud1.ID,stud1.firstname,stud1.lastname,stud1.surname,stud1.cource,stud1.rating);
}






