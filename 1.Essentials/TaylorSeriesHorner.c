#include<stdio.h>

double e(int x, int n){
    static double res = 1;
    if (n==0){
        return res;
    }
    res = 1 + (x*res/n) ;
    return e(x,n-1);
}

double e1(int x, int n){
    double s;
    for (;n>0;n--){
        s = 1 + (x*s/n);
    }
    return s;
}

int main(){
    double r1=e(2,10);
    double r2=e1(2,10);
    printf("%lf\n",r1);
    printf("%lf\n",r2);
}