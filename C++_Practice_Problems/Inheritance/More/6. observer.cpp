#include<iostream>

using namespace std;

class Observer{
public:
    virtual void update(double ibmPrice,double applePrice,double googlePrice);
};

class Subject{
public:
    virtual void doRegister(Observer o);
    virtual void doUnRegister(Observer o);
    virtual void notifyObjserver();

};



class StockGrabber:public Subject{
private:
    Observer observers[10];
    int index;
    double ibmPrice;
    double aplPrice;
    double googlePrice;



public:
    StockGrabber(){
        index=0;
    }
    void doRegister(Observer &o){
        observers[index]=o;
        index++;
    }
    void doUnRegister(Observer &o){
        int postion=-1;
        for(int i=0;i<index;i++){
            if(&observers[i]==&o){

            }
        }
    }
    void notifyObjserver(){
    }
};

int main(){

    return 0;
}
