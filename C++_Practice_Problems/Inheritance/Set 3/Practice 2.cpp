#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<cstring>
#include<string>

using namespace std;

//Do the tasks as such the output is similar to the given execl
//complete the following class

class Product{
    private:
        int id;
        string name;
        static int counter;
    protected:
        double price;
        Product *products[100];
        int productNo;


};

//override necessary methods
class Phones:public Product{
    private:
        static double tax;

};

//override methods
class Foods:public Product{

private:
        static double tax;

};


class Cart{
    double totalPrice;
    Product *products[100];
    int itemNo;
};

int main()
{
    Phones::setTax(15); // set  15% VAT on phones
    Foods::setTax(5);  // set 5% VAT on Foods
    Cart myCart;

    Foods mango("Rajshahir mango",500);
    Foods pithaPuli("Chitoi pitha",200);

    Foods hilsha("Ilish",1000);
    Product vrset("Virtual Reality Headset",10000);

    Phones samsungGalaxy("Samsung Galaxy S7",75000);
    Phones nokia("Nokia 1100",2000);

    samsungGalaxy.addFreeProduct(&vrset);
    samsungGalaxy.addFreeProduct(&hilsha);

	//addToCart add product to Cart
    myCart.addToCart(&samsungGalaxy);
    myCart.addToCart(&mango);
    myCart.addToCart(&pithaPuli);
    myCart.addToCart(&nokia);
	
	
//showCartDetails show products and their price
    myCart.showCartDetails();

    cout<<endl<<"**********After Tax Change*********"<<endl<<endl;

    Phones::setTax(10);
    Foods::setTax(7);

    myCart.showCartDetails();




    return 0;
}
