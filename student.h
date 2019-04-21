#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>
using namespace std;

class Student
{

    private:
    string name_;
    float id_;
    double midtermg_, finalg_;
    double grade;
    
    static char letterGrade;
    


    public:
    void setName(const string);
    void setID(const float);
    void setMidTermG(const double);
    void setFinalG(const double);
    
    string getName() const;
    float getID() const;
    double getMidTermG() const;
    double getFinalG() const;
    
    double calcSemGrade() const;
    Student(string, float, double, double, char);
    Student();
    static char getletterGrade()
    {
    return letterGrade;
    }
    
};
#endif
