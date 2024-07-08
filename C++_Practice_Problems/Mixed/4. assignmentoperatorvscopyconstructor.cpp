#include<iostream>
#include<stdlib.h>

using namespace std;

class student{
    private:
        int checky;
    public:
        char *name;
        int *number;
    public:

        student(){
            cout<<"Default construct"<<endl;
            name="Default";
        }

        student(const student &obj)
        {
            cout << "Copy constructor allocating ptr." << endl;
             number = new int;
            *number = *obj.number; // copy the value
            name="copycon";
            checky=5;
        }

        student(char given[]){
            cout<<given<<" Construct"<<endl;
            name=given;
        }


        void set(int size){
            number=(int *)malloc(sizeof(int)*size);
            number[0]=4;
            number[1]=5;
            checky=18;
        }

        void printName(){
            cout<<name<<checky<<endl;
        }

        void printNumber(){
            cout<<"Pointer address "<<&number<<endl;
            cout<<"Pointer value "<<number<<endl;
            cout<<number[0]<<endl;
        }
        friend void change(student &obj);
        ~student(){
            cout<<name<<" Destroyed"<<endl;
            free(number);
            free(name);
        }

        student& operator+(const student &obj)
        {
            cout<<"+ operator"<<endl;
            this->checky=this->checky+obj.checky;
            return *this;
        }

        student& operator=(const student& other) {

            cout<<"copy assignment operator called\n"<<endl;

            return *this;
        };


};

void change(student &another){
    another.checky=10;
    cout<<another.checky<<endl;
}


int check(student another){
    another.printName();
    another.printNumber();

    return 0;

}

/*
1. When an object of the class is returned by value.
2. When an object of the class is passed (to a function) by value as an argument.
3. When an object is constructed based on another object of the same class.
4. When compiler generates a temporary object.
*/


int main()
{
    student sid("sidy");
    sid.set(5);


    sid=sid+sid;

    /*
    sid.printName();
    sid+sid;
    sid.printName();
    */

    //sid.printNumber();

    //change(sid);

    //sid.printName();

   // check(sid);
   // check(sid);

    //student another("another");
    //another=sid;

    check(sid);
    //check(another);


    return 0;
}
