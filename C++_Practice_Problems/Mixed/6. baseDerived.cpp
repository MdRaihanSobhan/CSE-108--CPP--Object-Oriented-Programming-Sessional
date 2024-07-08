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

class DerivedA: public BaseA,public BaseB{

public:
     DerivedA():BaseB(),BaseA(){
        cout<<"Constructing Derived A"<<endl;
     }
     void print(){
        cout<<"Derived A"<<endl;
     }

};



int main()
{
    DerivedA obj;

    return 0;
}
