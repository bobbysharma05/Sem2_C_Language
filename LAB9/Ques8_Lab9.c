#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the number of integers : ");
    scanf("%d",&n);

    int *ptr = (int *) calloc(n,sizeof(int));

    printf("Before putting value of indexes in Block : \n");
    for(int i=0;i<n;i++){
        printf("%d\n",*(ptr + i));
    }

    for(int i=0;i<n;i++){
        *(ptr + i) = i;
    }

    printf("After putting value of indexes in Block : \n");
    for(int i=0;i<n;i++){
        printf("%d\n",*(ptr + i));
    }
    return 0;
}