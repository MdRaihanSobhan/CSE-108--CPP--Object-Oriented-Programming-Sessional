#include<iostream>
#include "department.cpp"

using namespace std;

/*
valid Department Code
CSE 1
EEE 2
ME 3
*/


//There can be at most 3 departments
class University{
    private:
        Department departments[3];
    public:
        University(){
            //set all department capacity 120
        }
        University(int CSEcapacity, int EEEcapacity, int MEcapacity){

        }

        bool addStudentToDepartment(Student student, int deptCode){
            return true;
        }

        bool removeStudentFromDepartment(int id, int deptCode){
            return true;
        }

        Student getStudentFromDepartment(int id, int deptCode){

            Student student;

            return student;
        }
};

int main(){

    University buet(2,3,4);

    Student rahim(1,2,1,1);

    return 0;
}

