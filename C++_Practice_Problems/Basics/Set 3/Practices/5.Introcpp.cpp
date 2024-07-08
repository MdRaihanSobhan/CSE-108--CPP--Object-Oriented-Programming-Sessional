#include<stdio.h>

namespace A{

    void print(){
        printf("This is in A");

    }

}

namespace B{

    void print(){
        printf("This is in B");

    }

}


int main(){

    using namespace A;

    print();


    return 0;
}
