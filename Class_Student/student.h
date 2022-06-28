#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
using namespace std;

class Student
{
    private:
        string firstname;
        string lastname;
        string surname;
        int cource;
        long ID;
        int rating; 
       
    public:
        Student(const Student& stud1);
        
        
        
        
        long getID();
        string getFirstName();
        string getLastName();
        string getSurName();
        int getCource();
        int getRating();
        
        void setID(long p_id);
        void setFirstName(string p_firstname);
        void setLastName(string p_lastname);
        void setSurName(string p_surname);
        void setCource(int p_cource);
        void setRating(int p_rating);


         Student operator=(Person op2);
        friend ostream& operator<<(ostream& stream, Student& obj);
        friend istream& operator>>(istream& stream, Student& obj);
  
};

