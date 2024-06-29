#include<stdio.h>
int main(){
    int n,len,pos;
    printf("ENter the length of string = ");
    scanf("%d",&n);

    char arr[n];
    printf("Enter the string = ");
    for(int i=0;i<n;i++){
        scanf("%c",&arr[n]);
    } 
    fflush(stdin);
    
    printf("ENter the length of sub string = ");
    scanf("%d",&len);

    printf("ENter the position of sub string = ");
    scanf("%d",&pos);

    char sub_arr[len];

    for(int i=pos;i<len;i++){
        sub_arr[pos] =  + i;
    }
    printf(sub_arr);
    return 0;
}
