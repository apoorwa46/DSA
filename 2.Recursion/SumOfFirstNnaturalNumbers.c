#include<stdio.h>

int sumOfnaturalNumbers(int n){
    if(n>0){
        return sumOfnaturalNumbers(n-1)+n;
    }
}
int main(){
    int num;
    printf("Enter the natural number till which yoiu need to find the sum: \n");
    scanf("%d", &num);
    int ans = sumOfnaturalNumbers(num);
    printf("%d",ans);
}