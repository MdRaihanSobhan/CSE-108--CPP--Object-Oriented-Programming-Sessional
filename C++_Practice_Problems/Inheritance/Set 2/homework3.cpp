#include<iostream>
using namespace std;

typedef enum {UNDEFINED, POINT2D, POINT3D, CIRCLE, SQUARE, RECTANGLE, SPHERE} STYPE;

class Shape
{
	STYPE type;
public:
	Shape();
	Shape(STYPE type);
	virtual void print();
	virtual double area();
	virtual bool contains(const Shape *s);
	//Intentionally made non-virtual
	bool operator==(const Shape &rhs);
	virtual ~Shape(){}
};

Shape::Shape()
{
	type = UNDEFINED;
}

Shape::Shape(STYPE argtype)
{
	type = argtype;
}

double Shape::area()
{
	cout << "I am a dummy Shape";
	return 0.0;
}

bool Shape::contains(const Shape *rhs)
{
	cout << "You see this, because appropriate contains function is undefined";
	return false;
}

void Shape::print()
{
	cout << "Type: " << type;
}

bool Shape::operator==(const Shape &rhs)
{
	if(type==rhs.type) return true;
	else return false;
}

class Point2D : public Shape
{
	double x,y;
public:
	Point2D();
	Point2D(STYPE argtype, int argx, int argy);
	void print();
	double area();
	bool contains(const Shape * rhs);
	bool contains(const Point2D * rhs);
	bool operator==(const Point2D &rhs);
	
	double getX() const { return x; }
	double getY() const { return y; }
	~Point2D(){}
};

Point2D::Point2D() //calls Base's default constructor
{
	x = 0.0;
	y = 0.0;
}

Point2D::Point2D(STYPE argtype, int argx, int argy) : Shape(argtype)
{
	x = argx;
	y = argy;
}

void Point2D::print()
{
	Shape::print();
	cout << " (" << x << "," << y << ")";
}

double Point2D::area()
{
	return 0.0;
}

bool Point2D::contains(const Shape *s)
{
	Point2D * pointType = dynamic_cast<Point2D*>(s);
	if(pointType!=NULL) 
	{
		//Supported
		return contains(pointType);
	}
	//By default, use base
	return Shape::contains(rhs);
}

bool Point2D::contains(const Point2D * rhs)
{
	if(x==rhs->x && y==rhs->y) return true;
	else return false;
}

bool Point2D::operator==(const Point2D & rhs)
{
	if( !Shape::operator==(rhs) ) return false;
	if( x==rhs.x && y==rhs.y ) return true;
	else return false;
}

class Circle : public Shape
{
	Point2D center;
	double radius;
public:
	Circle();
	Circle(STYPE type, Point2D c, double r); //implement this
	double area(); //implement this
	void print(); //implement this
	bool contains(const Shape * s); //implemented partially
	bool contains(const Point2D * p); //implement this
	bool contains(const Circle * rhs); //implement this
	bool contains(const Rectangle * p); //implement this
	bool operator==(const Circle &rhs); //implement this
	~Circle(){}
};

bool Circle::contains(const Shape * s)
{
	const Point2D * pointType = dynamic_cast<const Point2D*>(s);
	if(pointType!=null) 
	{
		//Supported
		return contains(pointType);
	}
	const Circle * circleType = dynamic_cast<const Circle*>(s);
	if(circleType!=null) 
	{
		//Supported
		return contains(circleType);
	}
	const Rectangle * rectangleType = dynamic_cast<const Rectangle*>(s);
	if(rectangleType!=null) 
	{
		//Supported
		return contains(rectangeType);
	}
	//By default
	return Shape::contains(rhs);
}

class Rectangle : public Shape
{
	Point2D topRight;
	Point2D bottomLeft;
Public:
	Rectangle();//implement this
	Rectangle(STYPE type, Point2D tr, Point2D bl);//implement this
	void print(); //implement this
	double area(); //implement this
	bool contains(const Shape *rhs); //implement this to check containment for point2d only
	bool operator==(const Rectangle &rhs); //implement this
	~Rectangle(){}
}

class Point3D : public Point2D
{
    double z;
public:
    Point3D(); //already implemented
    Point3D(STYPE type, double argx, double argy, double argz); //implement this
    void print(); //already implemented
    //double area(); Not needed, base version is sufficient
	bool contains(const Shape *rhs); //implement this
	bool contains(const Point3D *rhs);  //implement this
	~Point3D(){}
};

Point3D::Point3D()
{
    z = 0;
}

void Point3D::print()
{
	Shape::print();
    cout << " (" << getX() << "," << getY() << "," << z << ")";
}

class Shape3D : public Shape
{
public:
	Shape3D();
	Shape3D(STYPE type);
	virtual double volume();
	~Shape3D(){}
};

Shape3D::Shape3D()
{
	
}

Shape3D::Shape3D(STYPE argtype) : Shape(argtype)
{
	
}

double Shape3D::volume()
{
	cout << "You see this, because appropriate function is missing in the derived class";
	return 0.0;
}



class Sphere : public Shape3D
{
	Point3D center;
	double radius;
public:
	Sphere();//implement this
	Sphere(STYPE type, Point3D c, double r);//implement this
	void print(); //implement this
	double area(); //implement this
	double volume(); //implement this
	bool contains(const Shape * rhs); //implement this for checking containgment of Point3D, Sphere inside sphere
	bool contains(const Point3D * p); //implement this
	bool contains(const Sphere * s); //implement this
	~Sphere(){}
};


int main(void)
{
	//Write main function to demonstrate your code
	//Create circles, rectanges, point2d,point3d,and sphere objects using base class pointers
	//then call the virtual methods to show that polymorphism works!
	while(1)
	{
		int choice = 10;
		Shape * shape;
		Shape3D * shape3D;
		switch(choice)
		{
			cout << "1. Point2D 2. Rectangle 3. Circle\n";
			cout << "4. Point3D 5. Sphere. 0. Exit\n";
			cout << "Your choice:";
			cin >> choice;
			case 1:
				shape = new Point2D(POINT2D, 5.0,10.0);
				shape->print();
				cout << "\nArea: " << shape->area();
				break;
			case 2:
				Point2D p1(POINT2D,5.0,5.0);
				Point2D p2(POINT2D,20.0,20.0);
				shape = new Rectangle(RECTANGLE, p1, p2);
				shape->print();
				cout << "\nArea: " << shape->area();
				break
			case 3:
				Point2D p1(POINT2D,0.0,0.0);
				shape = new Circle(CIRCLE,p1,10.0);
				break:
			case 4:
				shape3D = new Point3D(POINT3D,5.0,10.0,20.0);;
				shape3D->print();
				cout << "\nArea: " << shape3D->area();
				cout << "\nVolume: " << shape3D->volume();
				break
			case 4:
				Point2D p1(POINT3D,0.0,0.0,0.0);
				shape3D = new Sphere(SPHERE,p1,10.0);
				shape3D->print();
				cout << "\nArea: " << shape3D->area();
				cout << "\nVolume: " << shape3D->volume();
				break:
		}
		if(choice==0.0)break;		
	}
	
	//add other functions for demonstration
	return 0;
}