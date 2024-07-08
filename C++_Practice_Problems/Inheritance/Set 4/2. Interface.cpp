#include <iostream>
#include <stdio.h>
#include <string>
#include <ctime>
using namespace std;

/**************** Do not modify Student class ******************/
class Student
{
    double cgpa;
protected:
    string name;
    double marks;
    int semester;
    void setGPA(double gpa)
    {
        cgpa = gpa;
    }
public:
    int id;
    string getName()
    {
        return name;
    }
    double getGPA()
    {
        return cgpa;
    }
    void print()
    {
        cout<< "Student Name: "<<name<<endl;
        cout<< "ID: "<<id<<endl;
        cout<< "Current Semester: "<<semester<<endl;
        cout<< "Marks: "<<marks<<endl;
    }
    /**
    calculateGrade() calculates the grade of a Student similar to BUET
    and returns the calculated grade
    */
    virtual string calculateGrade()=0;
};
/***********************************************************************/


void upgrade(Student* s, string grade)
{
    /**
    Make this function friend to Student class
    and invoke this function if a Student passed
    */
}

class UnderGrad  /// Complete UnderGrad class which inherits Student
{
    /// No extra variable or function can be added
};

class Graduate /// Complete Graduate class which inherits Student
{
    /// No extra variable or function can be added
};

int main()
{
    Student* student[5];
    string name;
    srand(time(0));

    for(int i=0; i<5; i++)
    {
        int ID = rand()%100;
        int semester = rand()%8+1;
        int mark = (double)(rand()%10000)/(double)100.0;
        cin>>name;

        if(rand()%2 == 0)
            /// Create student[i] which points to UnderGrad
        else
            /// Create student[i] which points to Graduate
    }

    /**
    Print all information of all UnderGrad students
    and after calulating grades, print CGPAs of all UnderGrad students
    */

    return 0;
}
