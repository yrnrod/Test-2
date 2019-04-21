#include "student.h"
#include <iostream>
#include <iomanip>
using namespace std;

double Student::calcSemGrade()                                         //This should be in the the other cpp file 
{
    cout << calcSemGrade << endl;           
}


int main()
{
    double grade, midtermg, finalg;                                  // Student studentObject;
                                                                     // studentObject.grade is the samething as defining them in main so it's no need to make new variables 
    
    cout << "What are your last two semester grades?" << endl;       //When you overload the operators you can have all of this inside it 
    cin >> midtermg;                                                 //After you overload the operators you can simply do cout<<studentObject and it'll print however you created the overloader to do
    cin >> finalg;  
    
   return 0;
}
