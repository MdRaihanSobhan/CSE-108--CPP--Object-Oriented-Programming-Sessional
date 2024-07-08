#include<iostream>

using namespace std;

class Rectangle{
public:
    double height;
    double width;

    double area(){
        return height*width;
    }
};

void printArea(Rectangle rect){
    cout<<rect.area();

}

int main(){

    Rectangle rct;
    rct.height=4;
    rct.width=4;

    printArea(rct);

    return 0;
}
