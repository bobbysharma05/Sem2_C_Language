#include<stdio.h>

void printfunc(int *arr, int n){
    for (int i=0; i<n;i++){
        printf("%d",*(arr + i));
    }
}


int main(){
    int arr1[] = {1,2,3};
    int arr2[] = {1,2};
    int arr3[] = {1,2,3,4};
    int arr4[] = {1};
    
    printfunc(arr1, 3);
    printf("\n");
    printfunc(arr2, 2);
    printf("\n");
    printfunc(arr3, 4);
    printf("\n");
    printfunc(arr4, 1);
    return 0;
}