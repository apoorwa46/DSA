#include<stdio.h>

double e(int x,int n){
    static double p=1, f=1;
    double r;
    if(n==0){
        return 1;
    }
    else{
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;       //as the addtion of terms are happening in the returning time so this expression is written
    }
}

int main()
{
    printf("%lf", e(4,15));
    return 0;
}