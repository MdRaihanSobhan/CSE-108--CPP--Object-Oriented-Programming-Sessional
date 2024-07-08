#include<iostream>
#include<math.h>
#include<cmath>
#include<stdlib.h>
#include<cstdlib>

using namespace std;

class Vector{

    private:
        int i;
        int j;
        int k;

    public:

        Vector(){
            cout<<"Default Construction"<<endl;
        }

        Vector(int a,int b,int c){
            i=a;
            j=b;
            k=c;
        }

        ~Vector(){
            cout<<"Destructing ("<<i<<","<<j<<","<<k<<")"<<endl;
        }



};

double getMagnitude(){

    return 0;
}


Vector addVector(){

}

void scale(int n){

}


void printVector(){
}


int main(){

    ///you must be able to explain construct and destructing output sequence
    Vector line1(1,2,3);
    Vector line2(4,5,6);

    cout<<getMagnitude(line1)<<endl;

    printVector(line1);
    Vector &line3=addVector(line1,line2);

    printVector(line1);
    printVector(line3);

    scale(line1,2);
    printVector(line1);
    printVector(line3);



    return 0;
}
