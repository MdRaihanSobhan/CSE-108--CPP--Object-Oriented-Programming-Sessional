#include <iostream>

using namespace std;

class Point{
    int x;
    int y;

    public:
    Point();//initialize x,y with zero
    Point(double a, double b); //initialize x,y with a,b respectively
    double originDistance(); //return distance of the point object from origin (0,0)
    void comparePoint(Point a); //state where 'a' lies with respect to the object
                                //positions: same, left, right, up, down, left-up, left-down, right-up, right-down
    void showPoint();
};

int main(){

    Point a, b(2,2), c(-5,3), d(3,2);

    a.showPoint(); //output: (0,0)

    b.showPoint(); //output: (2,2)

    cout<<b.originDistance()<<endl; //output: 2.82843

    a.comparePoint(b); //output: (2,2) is in right-up position of (0,0)

    b.comparePoint(c); //output: (-5,3) is in left-up position of (2,2)

    b.comparePoint(d); //output: (3,2) is in right position of (2,2)

    c.comparePoint(c); //output: (-5,3) is in same position of (-5,3)


    return 0;
}
