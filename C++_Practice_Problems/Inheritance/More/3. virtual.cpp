#include<iostream>

using namespace std;

class Base{
    public:
        virtual void print()=0;
};

class Derived:public Base{


    public:
        void print(){
            cout<<"In derived"<<endl;
        }

};

class AnotherDerived:public Base{


    public:
        void print(){
            cout<<"In anotherderived"<<endl;
        }

};


int main(){

    int n;
    cin>>n;

    Base *ptr;


    if(n==1){
        ptr=new Derived;
    }
    else{
        ptr=new AnotherDerived;
    }

    ptr->print();


    return 0;
}
