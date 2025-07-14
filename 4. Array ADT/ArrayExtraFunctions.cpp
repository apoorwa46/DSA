
#include<stdio.h>
#include<stdlib.h>

struct Array {
    int *A;
    int size;
    int length;
};
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void display(struct Array arr){
    int i;
    for(i=0;i<arr.length;i++){
        printf("%d ",arr.A[i]);
    }
}

int Get(struct Array arr,int index){
    if(index >= 0 && index < arr.length){
        return arr.A[index];
    }
    return -1;  // Return -1 if index is invalid
}
int Set(struct Array *arr,int index, int value){
    if(index >= 0 && index <arr->length){
        arr->A[index] = value;
        return 1;  // Return 1 if successful
    }
    return 0;  // Return 0 if index is invalid
}
int Avg(struct Array arr){
    int sum = 0;
    for(int i=0;i<arr.length;i++){
        sum=sum+arr.A[i];
    }
    return sum/arr.length;
}
int Max(struct Array arr){
    int max = arr.A[0];
    for(int i=0;i<arr.length;i++){
        if(arr.A[i]>max){
            max = arr.A[i];
        }
    }
    return max;
}
void InsertSort(struct Array *arr, int x){
    int i=arr->length - 1;;
    if(arr->length==arr->size){
        return;
    }
    while(arr->A[i]>x && i>=0){
        arr->A[i+1] = arr->A[i];
        i--;
    }
    arr->A[i+1] = x;
    arr->length++;
}
int CheckIfSorted(struct Array arr){
    for(int i=0;i<arr.length-1;i++){
        if(arr.A[i]<arr.A[i+1]){
            return 0;
        }
    }
    return 1;
}
void ChangeSorted(struct Array *arr){
    int i,j;
    i=0;
    j=arr->length-1;
    while(i<j){
        while(arr->A[i]<0){i++;}
        while(arr->A[j]>0){j--;}
        if(i<j){
            swap(&arr->A[i], &arr->A[j]);
        }
    }
}


int main(){
    struct Array arr1;
    arr1.size = 10;
    arr1.length = 9;
    arr1.A = (int *)malloc(arr1.size * sizeof(int));

    int values[] = {2, -3, 9, 16, 18, 21, -28, 32, 35};
    for (int i = 0; i < arr1.length; i++) {
        arr1.A[i] = values[i];
    }

    printf("%d", CheckIfSorted(arr1));

    free(arr1.A); // Always free dynamically allocated memory
    return 0;
}