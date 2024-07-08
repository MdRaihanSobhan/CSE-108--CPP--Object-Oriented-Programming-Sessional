#include <iostream>

using namespace std;

class BaseA
{
public:
    BaseA(){
        cout<<"Constructing A"<<endl;
    }
    void print(){
        cout<<"Base A"<<endl;
    }
};

class BaseB
{
public:
    BaseB(){
        cout<<"Constructing B"<<endl;
    }
    void print(){
        cout<<"Base B"<<endl;
    }
};

class DerivedA:public virtual BaseA{

public:
     DerivedA(){
        cout<<"Constructing Derived A"<<endl;
     }


};


class DerivedB:public virtual BaseA{

public:
     DerivedB(){
        cout<<"Constructing Derived B"<<endl;
     }


};

class DerivedC:public  DerivedA,public DerivedB{
public:
    DerivedC(){
        cout<<"Constructing Derived C"<<endl;
    }
};


int main()
{
    DerivedC obj;
    obj.print();

    return 0;
}
