#include<stdio.h>

int  maxi(int arr[], int size){
    int maxx=0;
    for(int i=0;i<size;i++){
        if (maxx<=arr[i]){
            maxx = arr[i];
           // printf("%d\n",maxx);
        }
   
    }
     return maxx;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<size;i++){
        scanf("%d",&arr[i]);
    }
    int j = maxi(arr,n);
    printf("%d",j);
    return 0;
}