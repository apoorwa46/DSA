
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
        printf("%d ",arr.A[i]);
    }
}
void Append(struct Array *arr,int x){  //appending an element in the end of an array
    if(arr->length < arr->size){
        arr->A[arr->length++]=x;
    }
}

void Insert(struct Array *arr, int index, int x){ //insering an element at the given index
    if(index <= arr->size && index>=0){
        int i;
        for(int i=arr->length;i>index;i--){
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index] = x;
        arr->length++;
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

    printf("\n");

    Append(&arr, 12);

    display(arr);
    printf("\n");

    Insert(&arr, 2 , 14);

    display(arr);
}