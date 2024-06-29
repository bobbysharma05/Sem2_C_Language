#include<stdio.h>

int main(){
    int a,b,c;

    printf("The value of a is ");
    scanf("%d",&a);

    printf("The value of b is ");
    scanf("%d",&b);

    c = a;
    a=b;
    b = c;

    printf("The value of a is %d\n The value of b is %d",a,b);
    return 0;
}