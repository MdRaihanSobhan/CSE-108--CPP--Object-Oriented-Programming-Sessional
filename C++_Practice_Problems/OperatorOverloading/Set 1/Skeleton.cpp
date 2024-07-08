#include<iostream>
#include<cmath>
using namespace std;

class Point2D
{
	int x,y;
public:
	Point2D(){ x = 0; y = 0; } //default constructor initializes to (0,0)
	Point2D(int x, int y);
	void setX(int x);
	void setY(int y);
	int getX();
	int getY();
	void print();
	~Point2D(){ x = 0; y = 0; } //destructor that sets all values to 0
};

Point2D::Point2D(int argx,int argy)
{
	//Complete this function
}

void Point2D::setX(int argx)
{
	//Complete this function
}

void Point2D::setY(int argy)
{
	//Complete this function
}

int Point2D::getX()
{
	//Complete this function
}

int Point2D::getY()
{
	//Complete this function
}

void Point2D::print()
{
	cout << "(" << x << "," << y << ")";
}

class Circle
{
	Point2D center;
	double radius;
public:
	//write a default constructor that initializes all values to 0
	Circle(Point2D c, double r);
	Point2D getCenter();
	double getRadius();
	//write getter and setter methods for this class
	double area(); //returns area of the circle
	void print(); //prints the rectangle in the stdout
	int intersect(Circle rhs); //determine if this circle intersects with rhs
	int contains(Point2D p); //determine if this circle contains point p
	double perimeter(); //returns perimeter of the circle
	//write a destructor that sets all values to 0
	double distance(Point2D p1, Point2D p2);
};

Circle::Circle(Point2D c, double r)
{
	//Complete this function
}

Point2D Circle::getCenter()
{
	//Complete this function
}

double Circle::getRadius()
{
	//Complete this function
}


double Circle::area()
{
	//Complete this function
}

int Circle::intersect(Circle rhs)
{
    
	//complete this function
}

int Circle::contains(Circle rhs)
{
	//complete this function
}

void Circle::print()
{
	cout << "Center: ";
	center.print();
	cout << "Radius: " << radius;
}

class Rectangle
{
	//define two variables that specifies the rectangle in a 2d space
	//the variables should represent: top-right point, bottom-left point
	//consider the rectangle is axes parallel
public:
	//write a default constructor that initializes all values to 0
	//write a constructor that accepts values of all member variables and set the members
	//variables accordingly
	//write getter and setter methods for this class
	double area(); //returns area of the rectangle
	int intersect(Rectangle rhs); //determine if this rectangle intersects with rhs
	int contains(Rectangle rhs); //determine if this rectangle contains rhs
	int inside(Circle c); //determine if this rectangle is completely inside the circle c
	double perimeter(); //returns perimeter of the circle
	//write a destructor that sets all values to 0
};


int main(void)
{
    //Demonstrate your circle class which will have a point and a radius
	//Demonstrate your area funciton showing that it successfully prints area of a circle
	//Demonstrate intersect(Circle) function by creating appropriate circles and showing that they intersect
	//Demonstrate contains(Point) function by creating appropriate circles and showing that one circle
	//contains the point


	//Demonstrate your Rectangle class
	//Demonstrate your area funciton showing that it successfully prints area of a rectangle
	//Demonstrate intersect(Rectangle) function by creating appropriate circles and showing that
	//they intersect
	//Demonstrate contains(Rectangle) function by creating appropriate circles and showing that
	//one rectangle contains another rectangle
	//Demonstrate inside(Circle) function by creating appropriate rectangle and circle and showing that
	//a rectange is completely inside a circle


	return 0;
}
