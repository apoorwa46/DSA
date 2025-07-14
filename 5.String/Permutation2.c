#include<stdio.h>


void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}


void prem(char s[], int l, int h){
    int i;
    if(l==h){
        printf("%s\n", s);
    }
    else{
        for(i=l;i<=h;i++){
            swap(&s[l], &s[i]);
            prem(s, l+1, h);
            swap(&s[l], &s[i]); // Backtrack
        }
    }
}



int main() {
    char str[10];
    printf("Enter a string: ");
    scanf("%s", str);
    int length = 0;
    while (str[length] != '\0') length++; // Calculate length of the string
    prem(str, 0, length - 1);
    return 0;
}