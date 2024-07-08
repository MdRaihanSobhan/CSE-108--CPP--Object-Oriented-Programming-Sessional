#include<iostream>
#include<cstring>

using namespace std;

class EnemyShip{
private:
    string name;
    double amtDamage;
public:
    string getName(){
        return name;
    }
    void setName(string newName){
        name=newName;
    }

    double getDamage(){
        return amtDamage;
    }
    void setDamage(double newDamage){
        amtDamage=newDamage;
    }

    void followHeroShip(){
        cout<<getName()<<" is following the hero"<<endl;
    }

    void displayEnemyShip(){
        cout<<getName()<<" is on the screen"<<endl;
    }
    void enemyShipShoots(){
        cout<<getName()<<" attacks and does "<<getDamage()<<" damage"<<endl;
    }
};

class UFOEnemyShip:public EnemyShip{
public:
    UFOEnemyShip(){
        setName("UFO enemy ship");
        setDamage(20);
    }

};

class RocketEnemyShip:public EnemyShip{
public:
    RocketEnemyShip(){
        setName("Rocket enemy ship");
        setDamage(10);
    }

};

class BigUFOEnemyShip:public UFOEnemyShip{
public:
    BigUFOEnemyShip(){
        setName("Big UFO enemy ship");
        setDamage(40);
    }

};

class EnemyShipFactory{

public:
    EnemyShip *makeEnemyShip(int choice){
        EnemyShip *newShip=NULL;

        if(choice==1){
            newShip=new UFOEnemyShip();
        }
        else if(choice==2){
            newShip=new RocketEnemyShip();
        }
        else if(choice==3){
            newShip=new BigUFOEnemyShip();
        }
        else{
            return NULL;
        }
        return newShip;
    }
};

void doStuffEnemy(EnemyShip &anEnemyShip){
    anEnemyShip.displayEnemyShip();
    anEnemyShip.followHeroShip();
    anEnemyShip.enemyShipShoots();
}

int main(){

    EnemyShipFactory shipFactory;
    EnemyShip *enemyShip;

    int n;
    cin>>n;

    enemyShip=shipFactory.makeEnemyShip(n);
    doStuffEnemy(*enemyShip);

    return 0;
}
