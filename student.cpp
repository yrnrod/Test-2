#include "student.h"
#include <cmath>
using namespace std;

void Student::setName(const string name)
{
    this->name_ = name;
}
void Student::setID(const float id)
{
    this->id_ = id;
}
void Student::setMidTermG(const double midtermg)
{
    this->midtermg_ = midtermg;
}
void Student::setFinalG(const double finalg)
{
    this->finalg_ = finalg;
}
string Student::getName() const
{
    return name_;
}
float Student::getID() const
{
    return id_;
}
double Student::getMidTermG() const
{
    return midtermg_;
}
double Student::getFinalG() const
{
    return finalg_;
}
double Student::calcSemGrade() const
{
  
   double grade = (midtermg_ + finalg_)/2;
    
 if(grade <60) 
 {
     cout << "You have a current grade of a F." << endl;
 }
    else if(grade <70)
    {
        cout << "You have a current grade of a D." << endl;
    }
    else if(grade <80)
    {
        cout << "You have a current grade of a C." << endl;
    }
    else if(grade <90)
    {
        cout << "You have a current grade of a B." << endl;
    }
    else
    {
        cout << "You have a current grade of an A." << endl;
    }
}
