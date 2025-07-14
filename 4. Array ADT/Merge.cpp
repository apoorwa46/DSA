#include<stdio.h>
#include<stdlib.h>

struct Array {
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr)
{
 int i;
 printf("\nElements are\n");
 for(i=0;i<arr.length;i++)
 printf("%d ",arr.A[i]);
} 

struct Array * Merge(struct Array *arr1, struct Array *arr2) {
    int i,j;
    int k;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    arr3->size = arr1->size + arr2->size;
    arr3->length = arr1->length + arr2->length;
    i=j=k=0;
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            arr3->A[k]=arr1->A[i];
            i++;
            k++;
        }
        else{
            arr3->A[k]=arr2->A[j];
            j++;
            k++;
        }
    }
    for(;i<arr1->length;i++)
        arr3->A[k++]=arr1->A[i];
    for(;j<arr2->length;j++)
        arr3->A[k++]=arr2->A[j];
    arr3->length=arr1->length+arr2->length;
    arr3->size=10;

    return arr3;
}


struct Array * Union(struct Array *arr1, struct Array *arr2) {
    int i,j,k;
    i=j=k=0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            arr3->A[k++]=arr1->A[i++];
        }
        else if(arr2->A[j]<arr1->A[i]){
            arr3->A[k++]=arr2->A[j++];
        }
        else{
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
    }
    for(;i<arr1->length;i++){
        arr3->A[k++]=arr1->A[i++];
    }
    for(;j<arr2->length;j++){
        arr3->A[k++]=arr2->A[j++];
    }
    arr3->length=k;
    arr3->size=10;
    return arr3;
}

struct Array * Intersection(struct Array *arr1, struct Array *arr2) {
    int i,j,k;
    i=j=k=0;
    struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            i++;
        }
        else if(arr2->A[j]<arr1->A[i]){
            j++;
        }
        else{
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
    }
    for(;i<arr1->length;i++){
        arr3->A[k++]=arr1->A[i];
    }
    for(;j<arr2->length;j++){
        arr3->A[k++]=arr2->A[j];
    }
    arr3->length=k;
    arr3->size=10;
    return arr3;
}


struct Array* Difference(struct Array *arr1,struct Array
*arr2)
{
 int i,j,k;
 i=j=k=0;

 struct Array *arr3=(struct Array *)malloc(sizeof(struct
Array));

 while(i<arr1->length && j<arr2->length)
 {
 if(arr1->A[i]<arr2->A[j])
 arr3->A[k++]=arr1->A[i++];
 else if(arr2->A[j]<arr1->A[i])
 j++;
 else
 {
 i++;
 j++;
 }
 }
 for(;i<arr1->length;i++)
 arr3->A[k++]=arr1->A[i];


 arr3->length=k;
 arr3->size=10;

 return arr3;
}

int main(){
    struct Array arr1 = {{1, 3, 5, 7, 9}, 10, 5};
    struct Array arr2 = {{2, 5, 6, 9, 10}, 10, 5};
    struct Array *arr3;
    arr3 = Intersection(&arr1, &arr2);
    Display(*arr3);

    return 0;
}
    