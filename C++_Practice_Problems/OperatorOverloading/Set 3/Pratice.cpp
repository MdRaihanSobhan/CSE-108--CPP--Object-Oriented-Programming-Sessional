#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Student{
    double *GPA;
    double *credit;
public:
    int ID;
    int total_count;
    /*
    Implement a parameterized constructor
    */

    void show()
    {
        cout<< "GPA and credit of Student "<<ID<<endl;
        cout<<"------------------------------------"<<endl;
        /*
        Write code for printing GPAs and credits
        */
        cout<<endl;
    }

    //Implement "+" operator which returns the total credit

    //Implement "/" operator which returns the sum of all (GPA*credit)

    /*Implement "<" operator which returns
      true if average GPA is less than that of the object in parameter
      and
      false if otherwise
    */
};

int main(){
    Student s1(1,5);
    Student s2(2,5);
    Student s3(3,6);

    /*
    a, b both are double-type array
    initial values are as output file
    */
    s1.set_value(a, b);
    s1.show();

    /*
    c, d both are double-type array
    initial values are similar as output file
    */
    s2.set_value(c,d);
    s2.show();

    /*
    e, f both are double-type array
    initial values are similar as output file
    */
    s3.set_value(e,f);
    s3.show();

    cout<< "CGPA of "<< s1.ID << " and "<< s2.ID <<": "<<(s1/s2)/(s1+s2)<<endl;
    cout<< "CGPA of "<< s2.ID << " and "<< s3.ID <<": "<<(s2/s3)/(s2+s3)<<endl;

    if(s1<s2)
        cout<<s1.ID<<" has less average GPA than "<<s2.ID <<endl;
    if(s2<s3)
        cout<<s2.ID<<" has less average GPA than "<<s3.ID <<endl;

}