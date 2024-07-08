#include<iostream>
#include<cstdlib>
#include<time.h>

using namespace std;


int main(){

    srand(time(NULL));


    for(int i=0;i<100;i++)
    {
        cout<<rand()%10<<endl;
    }

    return 0;
}
