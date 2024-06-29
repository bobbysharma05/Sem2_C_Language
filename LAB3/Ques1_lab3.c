#include<stdio.h>

#include<stdlib.h>
int main(){
    int n;
    printf("The otp is ");
    for(int i=0;i<6;i++){
        n = rand()%10;
        printf("%d",n);
    }
    return 0;
}