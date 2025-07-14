#include<stdio.h>
// Using hashing technique to find duplicates in a string
// This code counts the frequency of each character in the string
//Time Complexity: O(n)
//Space Complexity: O(1) since the size of the hash table is constant (26 for lowercase letters)
int main()
{
    char str[100]="finding";
    int H[26]={0};

    for(int i=0; str[i]!='\0';i++){
        H[str[i]-'a']++;
    }

    for(int i=0; i<26; i++){
        if(H[i]>1){
            printf("%c is repeated %d times\n", i+'a', H[i]);
        }
    }
}