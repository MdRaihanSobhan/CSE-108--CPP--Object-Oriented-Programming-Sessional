#include<iostream>

using namespace std;


int p[100];

int find(int x){
    if(p[x]==x)return x;
    return p[x]=find(p[x]);
}

void  Union(int a,int b){
    p[find(a)]=find(b);
}

int main(){
    int n=10;

    for(int i=0;i<n;i++){
        p[i]=i;
    }

    Union(1,3);
    Union(4,1);

    for(int i=0;i<n;i++){
        cout<<p[i]<<"\t"<<endl;
    }

    return 0;
}
