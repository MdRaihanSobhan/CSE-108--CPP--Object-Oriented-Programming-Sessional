#include <iostream>
using namespace std;


///Copy the modified inventory class from the solved Problem 4 program

///Write an appropriate definition of buyer class.

///Write an appropriate definition of seller class.

int main()
{
    int option, quantity, person;
    buyer b1, b2;
    seller s1, s2;
    cout<<"Enter option 1 to buy, option 2 to sell, and other to exit"<<endl;

    while(1)
    {
        cout<<"Option: ";
        cin>>option;
        if(option==1)
        {
            cout<<"Quantity: ";
            cin>>quantity;
            cout<<"Person (1 or 2): ";
            cin>>person;
            if(person==1)
            {
                b1.changeInventory(quantity);
                b1.show();
            }
            else
            {
                b2.changeInventory(quantity);
                b2.show();
            }

        }
        else if(option == 2)
        {
            cout<<"Quantity: ";
            cin>>quantity;
            cout<<"Person (1 or 2): ";
            cin>>person;
            if(person==1)
            {
                s1.changeInventory(quantity);
                s1.show();
            }
            else
            {
                s2.changeInventory(quantity);
                s2.show();
            }
        }
        else
            break;
    }

    return 0;
}
