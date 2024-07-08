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

        friend double getMagnitude(Vector &obj);
        friend Vector& addVector(Vector &vect1, Vector &vect2);
        friend void printVector(Vector &vect1);
        friend void scale(Vector &obj,int n);

};

double getMagnitude(Vector &obj){

    return sqrt(obj.i*obj.i+obj.j*obj.j+obj.k*obj.k);
}


Vector& addVector(Vector &vect1, Vector &vect2){
    vect1.i+=vect2.i;
    vect1.j+=vect2.j;
    vect1.k+=vect2.k;
    return vect1;
}

void scale(Vector &obj,int n){
    obj.i=obj.i*n;
    obj.j=obj.j*n;
    obj.k=obj.k*n;
}


void printVector(Vector &vect1){
    cout<<vect1.i<<endl;
    cout<<vect1.j<<endl;
    cout<<vect1.k<<endl;
    cout<<endl;

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
