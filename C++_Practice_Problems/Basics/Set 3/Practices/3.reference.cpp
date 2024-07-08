#include<stdio.h>




int main(){

    int i=5;

    printf("%d %d\n",&i, i);

    int& r=i;


    printf("%d %d\n",&r, r);

    r=6;

    printf("%d %d\n",&i, i);



    return 0;
}
