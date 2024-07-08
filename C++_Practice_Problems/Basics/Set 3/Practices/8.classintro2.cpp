#include<iostream>

using namespace std;

class Rectangle{
    private:
        double height;
        double width;

    public:
        bool setHeight(double hValue){
            if(hValue>=50 && hValue <=100){
                height=hValue;
                return true;
            }

            return false;
        }

        bool setWidth(double wValue){
            if(wValue>=100 && wValue <=200){
                width=wValue;
                return true;
            }

            return false;
        }

        double getArea(){
            return height*width;

        }

};




int main(){

    Rectangle rect1,rect2;

    rect1.setHeight(60);
    rect1.setWidth(160);


    rect2.setHeight(70);
    rect2.setWidth(180);

    cout<<rect1.getArea()<<endl;
    cout<<rect2.getArea()<<endl;


    return 0;
}

