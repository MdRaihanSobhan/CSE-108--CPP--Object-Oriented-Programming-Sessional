#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;






int main(){

    srand(time(0));

    for(int i= 0;i<100;i++){
        cout<<(double)rand()/RAND_MAX<<endl;
    }



    return 0;
}

