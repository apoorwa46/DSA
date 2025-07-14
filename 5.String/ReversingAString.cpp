#include<iostream>
using namespace std;

int main() {
    char str[100]="Apoorwa";
    char str2[100];
    int length;
    int i;
    for (length = 0; str[length] != '\0'; length++){

    }
    for (int i = 0; i < length; i++) {
        str2[i] = str[length - 1 - i];
    }
    str2[length]='\0';
    cout<<str2;

}