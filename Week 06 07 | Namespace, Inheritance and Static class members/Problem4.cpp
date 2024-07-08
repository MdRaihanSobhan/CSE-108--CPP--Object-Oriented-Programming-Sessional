#include <iostream>
using namespace std;

///Modify the members of the inventory class and add required code fragments anywhere except in the main function
///However, don't delete any member of the inventory class even it is not required to generate the output
class inventory
{
    int count;
public:
    inventory(){cout<<"Parameter-less constructor for inventory class object"<<endl;}
    inventory(int c){cout<<"Parameterized constructor for inventory class object"<<endl; count = c;}
    int get_count(){return count;}
    int set_count(int c){count = c;}
    void changeInventory(int c){cout<<"To be changed by the derived classes";}
    void show(){cout<<"To be changed by the derived classes";}
    ~inventory(){cout<<"Destructor for inventory class object"<<endl;}
};

int main()
{
    inventory i1, i2, i3;

    i1.set_count(10);
    i2.set_count(i2.get_count()+1);
    i1.set_count(i1.get_count()+4);

    cout<<"Available in inventory: "<<i3.get_count()<<endl;

    return 0;
}
