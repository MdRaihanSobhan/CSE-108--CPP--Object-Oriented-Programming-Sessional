#include <iostream>
#include <cmath>
using namespace std;

class Point
{
// x and y coordinate
    int x, y;
public:
    Point();
    Point(int a, int b);
    void set (int a, int b);
    int get(int a);
//Add necessary constructor(s) to initialize x and y
//Add your set and get functions for x and y

    void print()
    {
        cout << "Coordinate: "<< x <<", " <<y <<endl;
    }
};

Point:: Point()
{
    x=0; y-0;
}
Point:: Point(int a, int b)
{
    x=a; y=b;
}
void Point:: set (int a, int b)
{
    x=a; y=b;
}
int Point:: get(int a)
{
    if(a==0) return x;
    else return y;
}


class Circle
{
    Point p;
    int radius;
public:
// Add necessary constructor(s) to initialize p and radius
// Overload “upload” functions
    Circle();
    Circle(int m, int n, int r);

    void update(int);
    void update(int, int);
    void update(int a, int b, int c);


    void print()
    {
        cout << "Center ";
        p.print();
        cout << "Radius: " << radius << endl;
    }
};


Circle:: Circle(int m, int n, int r)
{
    p.set(m,n);
    radius=r;
}

void Circle:: update(int r)
{
    radius+=r;
}
void Circle:: update(int i,int j)
{
    int a= p.get(0);
    int b= p.get(1);

    p.set(a+i,b+j);
}
void Circle:: update(int i, int j, int r)
{
    int a= p.get(0);
    int b= p.get(1);
    p.set(a+i,b+j);
    radius+=r;
}

class Line
{
    Point p1,p2;
public:
     Line(int a1, int b1, int a2, int b2);
     void printlength();

};

Line:: Line(int a1,int b1, int a2, int b2)
{
    p1.set(a1,b1);
    p2.set(a2,b2);
}

void Line:: printlength()
{
    int x1=p1.get(0);
    int x2=p2.get(0);
    int y1=p1.get(1);
    int y2=p2.get(1);
    int dx= x1-x2;
    int dy=y1-y2;
    double length= sqrt(dx*dx + dy*dy);
    cout<<"Length of the line = "<<length<<endl;
}

int main()
{
    Point p(5,5);
    Circle c(2, 3, 5);
    cout << endl << "Point Display" <<endl;
    p.print();
    cout << endl << "Circle Display" <<endl;
    c.print();
    cout << endl;


//First update
    cout << "First Update" << endl;
// call “update” function of Circle class to increase the center’s x
    // coordinate by 5 and y coordinate by 5;

    c.update(5,5);

    c.print();
    cout <<endl;

//Second update
    cout << "Second Update" << endl;

// call “update” function of Circle class to increase the radius by 6;
    c.update(6);
    c.print();
    cout << endl;

//Third update
    cout << "Third Update" << endl;
    c.update(2,2,2);

// call “update” function of Circle class to increase the center’s x
    // coordinate by 2 and y coordinate by 2 and the radius by 2;
    c.print();
    cout << endl;

    Line l(4,5,7,9);
    l.printlength();
    return 0;
}
