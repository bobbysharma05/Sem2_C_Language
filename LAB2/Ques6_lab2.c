#include<stdio.h>

int main(){
    int a,b;
    printf("The value of a is ");
    scanf("%d",&a);

    printf("The value of b is ");
    scanf("%d",&b);

    a = a^b;
    b = a^b;
    a = a^b;
    printf("The value of a is %d\n The value of b is %d",a,b);
    return 0;
}