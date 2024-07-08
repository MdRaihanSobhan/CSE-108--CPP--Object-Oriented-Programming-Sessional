#include<iostream>

using namespace std;

class Human{
    public:
        Human(){
            cout<<"Constructor Human"<<endl;
        }

};

class Animal{
    public:
        Animal(){
            cout<<"Constructor Animal"<<endl;
        }

};



class AntMan:public Animal,public Human{

    public:
        AntMan():Human(),Animal(){
            cout<<"Constructor antman"<<endl;
        }

};

int main(){

    AntMan mrx;



    return 0;
}
