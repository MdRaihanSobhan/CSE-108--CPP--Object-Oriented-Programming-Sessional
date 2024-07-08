#include<iostream>
#include<cstring>

using namespace std;

class EnemyShip{
    private:
        string name;
        double dmgAmount;
    public:
        void setName(string newName){
            name=newName;
        }

        string getName(){
            return name;
        }

        void setDamage(double amount){
            dmgAmount=amount;
        }

        double getDamage(){
            return dmgAmount;
        }

        void shootHeros(){
            cout<<getName()<<" shooting heros"<<endl;
        }

        void inFlictDamangeOnHeros(){
            cout<<getName()<<" inflicted "<<getDamage()<<" damage on heros";
        }


};

class RocketEnemyShip:public EnemyShip{
    public:
        RocketEnemyShip(){
            setName("Rocket Enemy Ship");
            setDamage(20);
        }


};


class UFOEnemyShip:public EnemyShip{
    public:
        UFOEnemyShip(){
            setName("UFO Enemy Ship");
            setDamage(50);
        }

};


void doSomethingWithEnemy(EnemyShip *enemy){
    enemy->shootHeros();
    enemy->inFlictDamangeOnHeros();

}

class MakeEnemyFromHere{
    public:
        EnemyShip *makeEnemy(int choice){
            EnemyShip *enemy;
            if(choice==1){
                enemy=new RocketEnemyShip;
            }
            else{
                enemy=new UFOEnemyShip;
            }

            return enemy;

        }
};


int main(){

    MakeEnemyFromHere factory;

    int n;
    cin>>n;

    EnemyShip *enemy=factory.makeEnemy(n);

    doSomethingWithEnemy(enemy);

    return 0;
}
