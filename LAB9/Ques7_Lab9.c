#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the number of integers : ");
    scanf("%d",&n);

    int *ptr = (int *) malloc (n*sizeof(int));

    for(int i=0;i<n;i++){
        *(ptr + i) = i;
    }

    for(int i=0;i<n;i++){
        printf("%d\n",*(ptr +i));
    }
    return 0;
}