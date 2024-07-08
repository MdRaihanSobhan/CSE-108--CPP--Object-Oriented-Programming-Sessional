#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

class Random
{
    int row=0, col = 0, mx= INT_MIN, mn = INT_MAX;
    int** random = NULL;
public:
    int i, j;
    Random(int r, int c, int mini, int maxi);
    ~Random();
    void print();
    void randomize(int r, int c);
    int get(int r, int c);
    void add (int n);
    int add();

};

Random:: Random(int r, int c, int mini, int maxi)
{
    row= r, col = c, mx = maxi, mn = mini;

    random = (int**) malloc(r*sizeof(int*));
    for(int i= 0; i<r; i++)
    {
        *(random+i)= (int*)malloc(c*sizeof(int));
    }

}

Random:: ~Random()
{
    for(int i=0; i<row; i++)
    {
        free(*(random+i));
    }
    free(random);
}

void Random:: print()
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<random[i][j]<<" ";
        }
        cout<<endl;
    }
}

void Random:: randomize(int r, int c)
{
    int range= mx-mn;
    int a= rand()%range + mn ;
    random[r][c]=a;
}

int Random:: get(int r, int c)
{
    return random[r][c];
}

void Random:: add (int n)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            random[i][j]+=n;
        }
    }
    return;
}

int Random:: add()
{
    int sum=0;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            sum+=random[i][j];
        }
    }
    return sum;
}

int main()
{
    cout<<"Hello World"<<'\n';
    Random m(3,3,100,200);

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            m.randomize(i,j);
        }
    }

    m.print();
    cout<<m.get(0,0)<<'\n';
    m.add(100);
    m.print();
    cout<<m.add()<<'\n';

    return 0;
}


