#include<iostream>
#include<cstring>
#include<time.h>
#include<stdlib.h>

using namespace std;

class Character{
private:
    string name;
    double lifeForce;
    int id;

protected:
    void setId(int no){
        id=no;
    }

public:

    int getId(){
        return id;
    }
    string getName(){
        return name;
    }
    void setName(string newName){
        name=newName;
    }

    void setLifeForce(double amount){
        lifeForce=amount;
    }

    double getLifeForce(){
        return lifeForce;
    }
    void reduceLifeForce(double amount){
        lifeForce-=amount;
    }

    virtual double inflictDamage(){
        return 0;
    }

    bool isAlive(){
        return lifeForce>0;
    }

};

class Superman:public Character{
public:
    Superman(int no){
        setId(no);
        setName("Superman");
        setLifeForce(100);
    }

    double inflictDamage(){
        return rand()%11;
    }

};

class Doomsday:public Character{
public:
    Doomsday(int no){
        setId(no);
        setName("Doomsday");
        setLifeForce(100);
    }

    double inflictDamage(){
        return rand()%7;
    }

};


class CharacterFactory{

public:
    Character *makeCharacter(int choice,int no){
        Character *newShip=NULL;

        if(choice==0){
            newShip=new Superman(no);
        }
        else if(choice==1){
            newShip=new Doomsday(no);
        }
        else{
            return NULL;
        }
        return newShip;
    }
};


void printAllstatus(Character *characters[], int n){
    for(int i=0;i<n;i++){
        cout<<characters[i]->getName()<<"\t"<<characters[i]->getId()<<"\t"<<characters[i]->getLifeForce()<<endl;
    }
}

int countAlive(bool lives[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(lives[i]==true)count++;
    }
    return count;
}

void doStuffEnemy(Character *characters[], int n){
        bool *lives=(bool*)malloc(sizeof(bool)*n);
        for(int i=0;i<n;i++){lives[i]=true;}

        printAllstatus(characters,n);

        //cout<<countAlive(lives,n)<<endl;


        while(countAlive(lives,n)>1){
            int from=rand()%n;
            int to=rand()%n;
            double lifeForce=characters[from]->inflictDamage();
            characters[to]->reduceLifeForce(lifeForce);

            //cout<<characters[from]->getName()<<" "<<characters[from]->getId()<<" inflicted "<<lifeForce<<" damage on "<<characters[to]->getName()<<" "<<characters[to]->getId()<<endl<<endl;

            lives[to]=characters[to]->isAlive();
            //printAllstatus(characters,n);
        }

        int winner=-1;
        for(int i=0;i<n;i++){
            if(lives[i]==true){
                winner=i;
                break;
            }
        }
        if(winner==-1){
            cout<<"No one wins"<<endl;
        }
        else{
            cout<<characters[winner]->getName()<<" wins with life force "<<characters[winner]->getLifeForce();
        }

}

int main(){
    srand(time(NULL));
    CharacterFactory factory;
    Character *characters[100];

    int n=10;

    for(int i=0;i<n;i++)
    {
        characters[i]=factory.makeCharacter(rand()%2,i);
    }

    doStuffEnemy(characters,n);

    return 0;
}
