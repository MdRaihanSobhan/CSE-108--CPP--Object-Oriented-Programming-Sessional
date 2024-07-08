#include<iostream>
#include<cstdlib>

using namespace std;

class Stack{
private:
    int maxCapacity;
    int index;
    int *stacks;
public:
    Stack(int capacity){
        cout<<"Constructing"<<endl;
        maxCapacity=capacity;
        index=0;
        stacks=new int[capacity];
    }

    Stack( Stack &stack){



        cout<<"Copy Constructor called"<<endl;
        maxCapacity=stack.maxCapacity;
        index=stack.index;

        stacks=new int[stack.maxCapacity];

        for(int i=0;i<stack.index;i++){
            stacks[i]=stack.stacks[i];
        }
    }

    bool push(int value){
        if(index==maxCapacity){
            cout<<"Capacity reached"<<endl;
        }
        stacks[index]=value;
        index++;
    }

    void pop(){
        if(index==0){
            cout<<"Stack empty"<<endl;
            return;
        }
        index--;
    }

    int top(){
        if(index==0){
            cout<<"Stack empty"<<endl;
            return NULL;
        }
        index--;
        return stacks[index+1];
    }

    void printStack(){
        for(int i=0;i<index;i++){
            cout<<stacks[i]<<"\t";
        }
        cout<<endl;
    }

    int getCapacity(){
        return maxCapacity;
    }

    ~Stack(){
        cout<<"Destructor called"<<endl;
        delete []stacks;
    }

};

void doSomethingWithStack(Stack stack2){
    //Implement copy constructor
}

int main(){

    Stack stack(5);
    stack.push(1);
    stack.push(2);
    stack.push(3);

    stack.printStack();
    doSomethingWithStack(stack);
    stack.printStack();

    Stack another=stack;
    another.printStack();

    Stack temp(5);
    temp=stack;



    return 0;
}
