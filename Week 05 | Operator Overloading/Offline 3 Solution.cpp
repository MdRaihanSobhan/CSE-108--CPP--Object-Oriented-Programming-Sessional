#include<iostream>
#include<cstring>
using namespace std;

class Vector
{
    char *name;
    int x,y,z;
public:
    Vector(char *n)
    {
        int l = strlen(n);
        name = new char[l+1];
        strcpy(name,n);
        x=0;
        y=0;
        z=0;
    }
    Vector(char *n, int a, int b, int c)
    {
        int l = strlen(n);
        name = new char[l+1];
        strcpy(name,n);
        x=a;
        y=b;
        z=c;
    }

    int setX(int a)
    {
        x=a;
    }
    int setY(int b)
    {
        y=b;
    }
    int setZ(int c)
    {
        z=c;
    }


    void print()
    {
        cout<<name<<": "<<x<<"x";

        if(y>=0)
        {
            cout<<'+';
        }

        cout<<y<<'y';

        if(z>=0)
        {
            cout<<'+';
        }

        cout<<z<<'z'<<endl;
    }

    Vector operator^(Vector vct)
    {
        Vector vectem("");
        vectem.x=y*vct.z-z*vct.y;
        vectem.y=z*vct.x- x*vct.z;
        vectem.z=x*vct.y-y*vct.x;
        return vectem;
    }

    Vector operator*(int a)
    {
        x*=a;
        y*=a;
        z*=a;
        return *this;
    }

    friend Vector operator*(int n,Vector &vct)
    {
        Vector vectem("");
        vectem.x=(vct.x)*n;
        vectem.y=(vct.y)*n;
        vectem.z=(vct.z)*n;
        return vectem;
    }
    friend Vector operator*(Vector &vct1, Vector &vct2)
    {
        Vector vectem("");
        vectem.x=(vct1.x)*(vct2.x);
        vectem.y=(vct1.y)*(vct2.y);
        vectem.z=(vct1.z)*(vct2.z);
        return vectem;
    }
    void operator=(Vector vct)
    {
        x=vct.x;
        y=vct.y;
        z=vct.z;
        //return *this;
    }
    bool operator==(Vector &vct)
    {
        return(this->x==vct.x) && (this->y==vct.y) && (this->z==vct.z);
    }

    void setName(char *n)
    {
        int l = strlen(n);
        name = new char[l+1];
        strcpy(name,n);
    }


    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    int getZ()
    {
        return z;
    }

    char *getName()
    {
        return name;
    }

    ~Vector()
    {
        delete []name;
    }

};

int main()
{
    Vector v1("v1", 1,2,3), v2("v2", 4, 5, -6), v3("Result1"),v4("Result2",-27,18,-3);

    v1.print();     ///Print the components of vector v1
    v2.print();     ///Print the components of vector v2

    v3=v1^v2;       ///Calculate the cross product of vector v1 and vector v2 (Consider ^ as cross product for this assignment)
    v3.print();     ///Print the modified components of vector v3 (Name: Result1)

    if(v3==v4)      ///Check for equality; if two vectors contain equal component values (x, y, z), then they are equal.
        cout<<"Vectors are equal"<<endl;
    else
        cout<<"Vectors are not equal"<<endl;

    v1= v1*2;       ///Multiply each component of vector v1 with the given value
    v1.print();     ///Print the modified components of vector v1

    v2=2*v2;        ///Multiply each component of vector v2 with the given value
    v2.print();     ///Print the modified components of vector v2

    v3=v1*v2;       ///Multiply each component of vector v1 with the corresponding component of vector v2.
    v3.print();     ///Print the modified components of vector v3 (Name: Result1)

    if(v3==v4)      ///Check for equality; if two vectors contain equal component values (x, y, z), then they are equal.
        cout<<"Vectors are equal"<<endl;
    else
        cout<<"Vectors are not equal"<<endl;

    return 0;
}

