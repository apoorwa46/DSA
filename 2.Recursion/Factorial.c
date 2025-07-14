#include<stdio.h>

int factorial(int n){
    if (n==0){
        return 1;
    }else{
        return (factorial(n-1)*n);
    }
}
int main(){
    int ans = factorial(5);
    printf("%d", ans);
}