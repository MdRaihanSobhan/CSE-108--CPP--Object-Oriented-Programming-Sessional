#include<iostream>

using namespace std;

class Base{
    private:
        int i;

    protected:
        int j;
    public:
        int k;
};

class Derived:private Base{


    public:
        void doSomethingwithI(){

        }
};




int main(){

    Derived obj;
    obj.k=5;

    return 0;
}
