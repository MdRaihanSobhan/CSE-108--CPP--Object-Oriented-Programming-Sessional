#include<iostream>
#include "student.cpp"

using namespace std;


class Department{
    private:
        int capacity;
        int level;
        int term;
        Student *students;
        int departmentCode;
        int noOfStudents;

    public:
        Department(){
        }

        Department(int level,int term, int capacity, int deptCode){
            //allocate students array by the capacity
        }

        bool addStudent(Student student){
            //add student information into the array
            return true;
        }

        bool removeStudent(int byId){
            return false;
        }

        Student getStudent(int byId){
            //check if that id exists
            return students[0];
        }


};
