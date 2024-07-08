#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctime>
using namespace std;

template<typename T> class Array
{
    int size;
    T *arr;
public:
    /*
    Implement necessary constructors
    N.B.: no destructor is required
    */

    void printArray()
    {
        for(int i=0; i<size; i++)
            cout<<i << ": " << arr[i]<<endl;
    }

    /*
    Implement the following functions
    1) maximum() which calculates the maximum value in Array
    2) minimum() which calculates the minimum value in Array
    3) setArray() which initializes the array with values
    4) reverseArray() which reverses the Array
    5) getElement() which returns the element at specified index
    */
};

/*
Implement the template function getRandom()
*/

void doSomething()
{
    /*
    Implement this template function which can take any type of array and size of the array as inputs
    */
    int n;
    newArray.setArray(a, length);

    newArray.printArray();
    cout<<"Random element: "<< getRandom(newArray, length)<<endl<<endl;
    cout<<"Maximum is "<<newArray.maximum(n);
    cout<<" at index: "<<n<<endl;

    cout<<"Minimum is "<<newArray.minimum(n);
    cout<<" at index: "<<n<<endl<<endl;

    /*
    reverse the newArray and print the reversed array
    */
    cout<<"--------------------------------------"<<endl;
}

int main()
{
    double d_array[] = {14.1, 23.78, 15.143, 7.124, 1.453};
    doSomething(d_array, 5);

    int i_array[] = {5, 7, 52, 25, 16, 71, 23};
    doSomething(i_array, 7);

    char* str[] = {"Hello", "Employee", "Student", "Moment"};
    doSomething(str, 4);


    return 0;
}
