#include<iostream>
#include<string>
using namespace std;

class Animal
{
    protected:
    string animalName;


public:
   //write the necessary constructors and Speak() function

    string GetName()
    {
         //returns name of the animal
    }

};

class Domestic
{
protected:
    bool hasHouse;
public:
     //Write necesary constructors and Eat() function

};

class Cat: public Animal,public Domestic
{
public:
    // write the necessary constructors and other necessary functions

};

class Dog:public Animal
{
public:
    // write the necessary constructors and other necessary functions
};

void SpeakReport(Animal &rAnimal)
{
    cout << rAnimal.GetName() << " says " << rAnimal.Speak() << endl;
}

void EatReport(Domestic &dAnimal)
{
    cout<<"eats" << dAnimal.Eat()<<endl;
}

int main()
{
    Animal ob;
    Domestic ob1;
    Cat cCat("Fred",true);
    Dog dDog("Dino");

    Animal *a;
    Domestic *d;
    a=&ob;
    cout<<a->Speak()<<endl;

    d =&ob1;
    cout<<d->Eat()<<endl;

    a= &dDog;
    cout<<a->Speak()<<endl;

    a=&cCat;
    cout<<a->Speak()<<endl;

    d=&cCat;
    cout<<d->Eat()<<endl;

    SpeakReport(dDog);
    SpeakReport(cCat);
    EatReport(cCat);

    return 0;
}
