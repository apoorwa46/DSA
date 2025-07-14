#include<stdio.h>

void prem(char s[], int k){
    static int A[10] = {0};
    static char res[10];
    int i;
    if(s[k]=='\0'){
        res[k]='\0';
        printf("%s\n",res);
    }
    else{
        for(i=0;s[i]!='\0';i++){
            if(A[i]==0){
                res[k]=s[i];
                A[i]=1;
                prem(s, k+1);
                A[i]=0; //Backtracking to allow other characters to be used
            }
        }
    }
}
int main() {
    char str[10];
    printf("Enter a string: ");
    scanf("%s", str);
    prem(str, 0);
    return 0;
}