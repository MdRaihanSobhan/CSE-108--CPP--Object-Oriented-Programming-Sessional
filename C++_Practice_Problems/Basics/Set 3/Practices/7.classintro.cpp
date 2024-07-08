#include<iostream>

using namespace std;

struct Rectangle{

    double height;
    double width;

};


double getArea(Rectangle rect){

    return rect.height*rect.width;
}


int main(){

    Rectangle rect1,rect2;

    rect1.height=10;
    rect1.width=15;

    rect2.height=10;
    rect2.width=15;

    cout<<getArea(rect1)<<endl;
    cout<<getArea(rect1)<<endl;

    return 0;
}

