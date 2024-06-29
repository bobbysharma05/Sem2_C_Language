#include<stdio.h>

int main(){
    int a,b,c;
    printf("The value of a is ");
    scanf("%d",&a);

    printf("The value of b is ");
    scanf("%d",&b);

    printf("The value of c is ");
    scanf("%d",&c);

    printf("The greatest number is %d",a>b?(a>c?a:c):(b>c?b:c));
    return 0;
}