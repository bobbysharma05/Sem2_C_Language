#include<stdio.h>
int main(){
    int n;
    
    printf("Enter thee length of the array: ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int *aa = arr;
    int maxx  = *(aa+0);
    for(int i=0;i<n;i++){
        if (maxx < *(aa+i)){
            maxx = *(aa+i);
        }
    }
    printf("%d",maxx);
    return 0;
    
}