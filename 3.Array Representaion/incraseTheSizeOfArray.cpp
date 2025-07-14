#include<iostream>
using namespace std;

int main(){
    int *p = new int[5];
    int *q = new int[10];

    for(int i=0;i<5;i++){
        cin>>p[i];
    }

    for(int i=0;i<5;i++){
        cout<<p[i];
    }
    cout<<"\n";
    for(int i=0;i<5;i++){
        q[i]=p[i];
    }

    for(int i=5;i<10;i++){
        cin>>p[i];
    }

    for(int i=0;i<10;i++){
        cout<<p[i];
    }

    delete []p;
    p=q;
    q=NULL;

}