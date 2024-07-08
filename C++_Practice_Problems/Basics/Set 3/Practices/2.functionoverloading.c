#include<stdio.h>

int sum(int a,int b){

    return a+b;
}

int sum(int a,int b, int c){

    return a+b+c;
}


int main(){

    printf("%d",sum(2,3));
    printf("%d",sum(2,3,4));


    return 0;
}
