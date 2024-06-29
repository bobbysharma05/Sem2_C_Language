#include<stdio.h>
int main(){
    int n;
    printf("the order of the matrix : ");
    scanf("%d",&n);

    int arr1[n][n];
    int sum=0;

    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (i==j){
                sum = sum + (arr1[i][i] );
            }
        }
    }

    printf("%d",sum);
    return 0;
}