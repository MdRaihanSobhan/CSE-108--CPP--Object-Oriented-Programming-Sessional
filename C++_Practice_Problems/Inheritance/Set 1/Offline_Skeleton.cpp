#include<iostream>
using namespace std;

class pointType
{
    private:
    double xCoordinate;
    double yCoordinate;

    public:
    pointType(double x = 0.0, double y = 0.0)
    {
        xCoordinate = x;
        yCoordinate = y;
    }
    void setPoint(double x, double y)
    {
        xCoordinate = x;
        yCoordinate = y;
    }
    void print()
    {
        cout << "(" << xCoordinate << ", " << yCoordinate << ")" << endl;
    }
};


int main()
{
    cylinderType cylinder1(3, 2.5, 4, 2.5);
    cylinderType cylinder2;

    cout << "***** Cylinder 1 *****" << endl;
    cylinder1.print();
    cout << endl;

    cylinder2.setPoint(-2.5, 7);
    cylinder2.setRadius(4);
    cylinder2.setHeight(3.9);
    cout << "***** Cylinder 2 *****" << endl;
    cylinder2.print();
    cout << endl;

    double x, y;
    double r;
    double h;

    cylinderType cylinder3;

    cout << "Enter x Coordinates of the center: ";
    cin >> x;
    cout << endl;

    cout << "Enter y Coordinate of the center: ";
    cin >> y;
    cout << endl;

    cout << "Enter base radius: ";
    cin >> r;
    cout << endl;

    cout << "Enter cylinder height: ";
    cin >> h;
    cout << endl;

    cylinder3.setCenterRadiusHeight(x, y, r, h);

    cout << "***** Cylinder 3 *****" << endl;
    cylinder3.print();
    cout << endl;

    return 0;
}
