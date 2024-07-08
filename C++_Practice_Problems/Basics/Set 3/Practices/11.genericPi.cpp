#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

class point{
    public:
        double x;
        double y;

        void printPoint(){
            cout<<x<<" , "<<y<<endl;
        }

};

point getRandomPoint(double x){
    point p;

    p.x=((double)rand()/RAND_MAX)*x;
    p.y=((double)rand()/RAND_MAX)*x;

    return p;

}

class circle{
    public:
        point center;
        double r;

        void setCenterAndRadius(point c, double radius){
            center=c;
            r=radius;
        }

        bool isInside(point p){
            double dist=(center.x-p.x)*(center.x-p.x)+(center.y-p.y)*(center.y-p.y);
            if(dist<r*r)return true;

            return false;

        }
};


int main(){
    srand(time(0));


    double r=1;

    point p;
    p.x=r/2;
    p.y=r/2;

    circle c;
    c.setCenterAndRadius(p,r/2);


    double totalPoints=1000000;
    double pointInCircle=0;

    for(int i=0;i<totalPoints;i++){

        point randomPoint=getRandomPoint(r);

        if(c.isInside(randomPoint)){
            pointInCircle++;
        }
    }

    cout<<4*pointInCircle/totalPoints<<endl;



    return 0;
}
