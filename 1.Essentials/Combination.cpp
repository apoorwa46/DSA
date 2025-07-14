#include<iostream>
using namespace std;
int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}

int c(int n, int r){
    int t1,t2,t3;
    t1=fact(n);
    t2=fact(r);
    t3=fact(n-r);

    return t1/(t2*t3);
}

int c1(int n, int r){
    if(r==0 || n==r){
        return 1;
    }
    else{
        return c1(n-1,r-1)+c1(n-1,r);
    }
}

int main(){
    int r= c1(4,2);
    cout<<r;
}