#include<iostream>

using namespace std;

class Human{
    public:
        int isMammal;

    private:
        int gender;

    protected:
        int xrayVision;

};

class SuperHuman:public Human{

    public:
        int isMammal;

    protected:
        int xrayVision;


};

class SuperDuperHuman:protected SuperHuman{

    protected:
        int isMammal;

    protected:
        int xrayVision;


};

class UltraSuperHuman:private SuperDuperHuman{

    private:
        int isMammal;

    private:
        int xrayVision;


};


class SuperUltraSuperHuman:public UltraSuperHuman{



};





int main(){

    Human rahim;
    SuperHuman rajnikant;





    return 0;
}
