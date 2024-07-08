#include <iostream>
using namespace std;

class Point{
private:
    double x;
    double y;
};

class Line{
private:
    Point a;
    Point b;

public:
    Point ratio(int m, int n){  ///returns the point that divides the line segment by m:n ratio

    }
};



int main(){

    Point p1(0,5), p2(10,10), p3;  ///create Point object using 2 types of constructor
    Line l1(p1,p2);   ///create line object

    p3=l1.ratio(2,1);
    ///then print point p3

    return 0;
}
