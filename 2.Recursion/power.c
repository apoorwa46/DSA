#include<stdio.h>
#include<math.h>

int power1(int m, int n){
    if (n==0){
        return 1;
    }else{
        return power1(m,n-1)*m;
    }
}

//if n is even there is a special case

int power2(int m, int n){
    if (n==0){
        return 1;
    }
    if(n%2==0){
        return power2(m*m,n/2);  // this is the special case
    }
    return m*power2(m*m,(n-1)/2);
}
int main()
{
    int ans1 = power1(2,8);
    printf("%d",ans1);

    int ans2 = power2(2,8);
    printf("\n%d",ans2);
}