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

class Rectangle:public Shape{
    public:
        Rectangle(double h,double w){
            height=h;
            width=w;
        }
        double getArea(){
            return height*width;
        }

};


class Triangle:public Shape{
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

    Shape *rect=new Rectangle(4,5);
    Shape *tri=new Triangle(1,2);
    Shape *sq=new Square(4);

    cout<<rect->getArea()<<endl;
    cout<<tri->getArea()<<endl;
    cout<<sq->getArea()<<endl;



    return 0;
}
