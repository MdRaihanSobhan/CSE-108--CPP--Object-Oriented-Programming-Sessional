#include<stdio.h>

void checkHere(int &r){
    printf("%d %d\n",&r, r);
    r=6;
}


int main(){

    int i=5;

    printf("%d %d\n",&i, i);

    checkHere(i);

    printf("%d %d\n",&i, i);

    return 0;
}
