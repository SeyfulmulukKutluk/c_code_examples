#include<stdio.h>
#define SIZE 10
void sortb(int *arr, int size);
void sorts(int *arr, int size);
void printarray(int *arr,int size);
void assignarrays(int *arr,int size,int* arr1, int size1);

int main(void)
{
    int array[SIZE],array2[SIZE];
    int i,num;
    printf("please enter the element of array");
    for(i=0; i<SIZE; i++)
    {
        scanf("%d", &num);
        array[i] = num;
        

    }
    assignarrays(array, SIZE, array2, SIZE);
    sortb(array, SIZE);
    sorts(array2, SIZE);

    printarray(array, SIZE);
    printarray(array2, SIZE);
}

void sortb(int *arr, int size)
{
    int temp,a,b;
    for(a=0; a<size-1; a++){
        for(b=a+1; b<size; b++){
            if(arr[b]<arr[a]){
            temp=arr[a];
            arr[a]=arr[b];
            arr[b]=temp;
            }

        }
    }
}
void sorts(int *arr, int size)
{
    int temp,a,b;
    for(a=0; a<size-1; a++){
        for(b=a+1; b<size; b++){
            if(arr[b]>arr[a]){
            temp=arr[a];
            arr[a]=arr[b];
            arr[b]=temp;
            }

        }
    }
}
void printarray(int *arr,int size)
{
    int b;
    for(b=0; b<size; b++){
        printf("%d ",arr[b]);
    }
}
void assignarrays(int *arr,int size,int* arr1, int size1)
{
    int k;
    for(k=0; k<size1; k++){
        arr1[k] = arr[k];
    }
}
