//This one using swap function
#include<iostream>
using namespace std;

int main()
{
    char str[100]= "Apoorwa";
    int length;
    int i,j;
    for(length = 0;str[length] != '\0'; length++)
    {
        // Calculate the length of the string
    }
    j=length-1;
    for(i=0;i<j;i++,j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    cout<<str;
    return 0;
}