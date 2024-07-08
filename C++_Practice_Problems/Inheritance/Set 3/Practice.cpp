#include<iostream>
using namespace std;


class List
{
    protected:
    int *list;
    int maxsize;
    int number_of_elements;

    public:
    List(int ms)
    {
        maxsize = ms;
        number_of_elements = 0;
        list = new int[maxsize];
    }
    int getmax_size()
    {
        return maxsize;
    }
    int getnumber_of_elements()
    {
        return number_of_elements;
    }

    virtual void print()
    {
        for (int i =0;i<number_of_elements;i++)
        {
            cout<<list[i]<<"\t";
        }
        cout<<endl;
    }
    //Define Push and pop as virtual

};


class Stack:public List
{
    int tos;
    public:
    Stack(int ms):List(ms)
    {
        tos = 0;
    }
    // Implement virtual functions according to rules
};


// Similarly Create a class Queue which inherits List
// Remember, you may need to override the print() function here

int main()
{
    List *stack =  new Stack(5);
    stack.push(1);
    stack.push(2);
    stack.print();
    cout<<stack.pop();
    cout<<stack.getnumber_of_elements();

    // Similarly write test code segments for Queue
    return 0;
}