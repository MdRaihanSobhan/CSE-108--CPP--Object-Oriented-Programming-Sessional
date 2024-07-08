#include<iostream>

using namespace std;

class Base{

private:
    int i;
    static bool is;
    static Base* obj;

    Base(){
        cout<<"Constructed"<<endl;
        is=true;
    }

public:
    static Base *getInstance(){
        if(is)return obj;
        obj=new Base;
        return obj;
    }

    void setValue(int v){i=v;}
    int getValue(){return i;}
    ~Base(){
        cout<<"Destroyed"<<endl;
        is=false;

    }
};

bool Base::is=false;
Base* Base:: obj=0;

int main(){

    Base *obj=Base::getInstance();
    obj->setValue(5);
    Base *another=Base::getInstance();
    cout<<another->getValue()<<endl;

    another->~Base();
    Base *obj2=Base::getInstance();

    return 0;
}
