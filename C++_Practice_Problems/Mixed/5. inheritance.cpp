#include <iostream>

using namespace std;

class Shape
{
    private:
        char *name;
    protected:
        int width;
        int height;
        int thickNess;
    public:
        int shapeNumber;

        Shape(char* shapeName){
            name=shapeName;
        }

        void setName(char* shapeName){
            name=shapeName;
        }

        int getVolume(){
            return width*height*thickNess;
        }

        char* getName(){
            return name;
        }

};


class Cube:public Shape{

public:

    Cube(int a,int b,int c):Shape("Cube"){
        width=a;
        height=b;
        thickNess=c;
    }



};

int main()
{
    Cube obj(1,2,3);

    cout<<obj.getName()<<"\t"<<obj.getVolume();



    return 0;
}
