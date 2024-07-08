#include<iostream>

using namespace std;

class Shape{
    protected:
        double height;
        double width;
    public:
        double getArea(){
            return 0;
        }

};

class Rectangle:private Shape{
    public:
        Rectangle(double h,double w){
            height=h;
            width=w;
        }
        double getArea(){
            return height*width;
        }

};


class Triangle:private Shape{
    public:
        Triangle(double h,double w){
            height=h;
            width=w;
        }
        double getArea(){
            return 0.5*height*width;
        }

};

class Square:public Rectangle{
public:
        Square(double h):Rectangle(h,h){
        }

};

int main(){

    Rectangle rect(4,5);
    Triangle tri(1,2);
    Square sq(4);

    cout<<rect.getArea()<<endl;
    cout<<tri.getArea()<<endl;
    cout<<sq.getArea()<<endl;



    return 0;
}
