#include<stdio.h>

int main(){
    int a;
    float b;
    char c;
    double e;
    char d[80];
    unsigned int o;
    unsigned int h;

    printf("Write the integer = ");
    scanf("%d",&a);

    printf("Write the float value = ");
    scanf("%f",&b);

    printf("Write the character = ");
    scanf("\n");
    scanf("%c",&c);

    printf("Write the string = ");
    scanf("%s",d);

    printf("Write the octal integer = ");
    scanf("%o",&o);

    printf("Write the hexa decimal integer = ");
    scanf("%x",&h);
    // scanf("\n");

    printf("Write the double = ");
    scanf("%lf",&e);

    printf(" Integer is %d\n Float value is %f\n Character is %c\n The String is %s\n The octal integer is %o\n The hexadecimal is %x\n The double is %lf/n",a,b,c,d,o,h,e);
    return 0;
}