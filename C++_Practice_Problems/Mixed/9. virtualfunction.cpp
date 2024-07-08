#include <iostream>

using namespace std;

class Polygon{
protected:
    int width;
    int height;

public:
    virtual int getArea()=0;
};

class Rectangle:public Polygon{
public:
    Rectangle(int w,int h){
        width=w;
        height=h;
    }
    int getArea(){
        return width*height;
    }
};

class Triangle:public Polygon{
public:
    Triangle(int w,int h){
        width=w;
        height=h;
    }
    int getArea(){
        return 0.5*width*height;
    }

};


int main()
{

    Rectangle obj1(1,2);
    Triangle obj2(4,5);

    Polygon* p1=&obj1;
    Polygon* p2=&obj2;

    cout<<p1->getArea()<<endl;
    cout<<p2->getArea()<<endl;

    return 0;
}
