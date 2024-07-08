#include<iostream>

using namespace std;

///

class Transaction{
    private:
        int fromBankAccountNo;
        int toBankAccountNo;
        double transactionAmount;
    public:
        Transaction(){

        }
};

class Client{
    private:
        int bankAccountNo;
        char* name;
        Transaction transactions[20];
        int transactionNo;
        double balance;

    public:
        Client(){
        }


        void printClientInfo(){
            cout<<"--------------"<<endl;
            ///Do nessary things to print client info and transactions entries
            cout<<"--------------"<<endl;
        }

};

class Bank{

    private:

        int maxCapacity;
        int numberOfClients;
        Client *clients;

    public:

        void printClients(){
                cout<<endl;
                    ///call print function for each clients from here
                cout<<endl;
        }

        bool addClient(Client client){

            return true;
        }


};


int main(){


    Bank sonaliBank(3); ///Create Bank object with capacity 3. allocate memory for this clients.

    /*Client anik(1,"Anik Ahmed",5000); ///Create appropriate constructor for creating object
    Client azad(2,"Abul kalam Azad",5000);
    Client azad2(2,"Abul kalam Azad2",5000);
    Client tanvir(3,"Tanvir Hossain",5000);
    Client anonto(4,"Anonto Ghosh",5000);
    Client minhaz(5,"Minhazul Rahman",5000);
    Client sakib(6,"Sakib Khan",5000);


    ///addClient function will add an object to clients return true if successful otherwise
    ///If capacity reached show appropriate message return false
    ///if same account already exists show message return false

    sonaliBank.addClient(anik);
    sonaliBank.addClient(azad);
    sonaliBank.addClient(azad2);
    sonaliBank.addClient(tanvir);
    sonaliBank.addClient(anonto);
    sonaliBank.addClient(minhaz);
    sonaliBank.addClient(sakib);

    cout<<"After adding"<<endl;
    sonaliBank.printClients();  ///print detail information of clients


    ///remove client with bankaccountno
    ///if that account exists remove it return true else return false

    sonaliBank.removeClient(3);

    ///if that object exists. you can think of it as if this person's id is already exists like previous
    sonaliBank.removeClient(anonto);

    cout<<"After Removing"<<endl;
    sonaliBank.printClients();

    sonaliBank.addClient(minhaz);
    sonaliBank.addClient(sakib);
    cout<<"After Adding new clients"<<endl;
    sonaliBank.printClients();


    ///Make transaction will transfer money from fromAccount to toAccount
    ///if anyone of the id is invalid i mean not exists in list clients return false
    ///if fromAccount balance is less than amount no transation can be made return false
    ///if same account no given return false
    ///otherwise makeTransaction and put an entry into transactions

    sonaliBank.makeTransaction(1,1,2000);
    sonaliBank.makeTransaction(1,2,10000);
    sonaliBank.makeTransaction(1,2,3000);
    sonaliBank.makeTransaction(2,5,3000);
    sonaliBank.makeTransaction(1,5,3000);
    sonaliBank.makeTransaction(5,3,3000);

    sonaliBank.printClients();
*/

    return 0;
}
