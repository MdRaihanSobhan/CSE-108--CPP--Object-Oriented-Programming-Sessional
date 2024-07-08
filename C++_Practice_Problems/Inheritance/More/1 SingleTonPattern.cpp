#include<iostream>

using namespace std;

class A{
    private:
        int i;
        static A* obj;

        A(){
            cout<<"Constructing"<<endl;
        }

    public:
        static A* getInstance(){
            if(obj)return obj;

            obj=new A;

            return obj;
        }

        void setValue(int n){
            i=n;
        }
        int getValue(){
            return i;
        }

        ~A(){
            obj=0;
        }


};

A* A::obj=0;

int main(){


    A* something=A::getInstance();

    something->setValue(5);

    A::getInstance()->~A();

    A* another=A::getInstance();

    cout<<another->getValue()<<endl;




    return 0;
}
