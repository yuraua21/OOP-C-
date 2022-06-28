#ifndef GRADUATESTUDENT_H
#define GRADUATESTUDENT_H

#include <string>
#include "Student.h"
using namespace std;

class GraduateStudent : public Student
{
    private:
        string DiplomWorkName;
        int percent;
    public:
        GraduateStudent() : Student(), DiplomWorkName(""), percent(0) {}
        
        //void setDiplomParam(string p_diplom_name, int p_percent);
        // get methods 
        string getDiplomWorkName();
        int getPercent();
        // set methods
        void setDiplomWorkName(string p_DiplomWorkName);
        void setPercent(int p_Percent);
        // 
};

#endif