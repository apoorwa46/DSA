
#include<stdio.h>
#include<stdlib.h>

struct Array {
    int *A;
    int size;
    int length;
};

void display(struct Array arr){
    int i;
    for(i=0;i<arr.length;i++){
        printf("%d",arr.A[i]);
    }
}

int main(){
    struct Array arr;
    int n;
    int i;

    printf("Enter the Size of the array:\n");
    scanf("%d",&arr.size);

    arr.A=(int *)malloc(arr.size*sizeof(int));

    printf("Enter the Length of the array:\n");
    scanf("%d",&n);

    printf("Enter the elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr.A[i]);
    }
    arr.length = n;
 
    display(arr);
}