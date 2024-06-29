#include<stdio.h>
int main(){
    float a,b;
    printf("Enter the numbers a and b : ");
    scanf("%f %f",&a,&b);
    if((a/b)>1){
        printf("%.f is greater than %.f",a,b);
    }
    else if((a/b)==1) printf("Both numbers are equal.");
    else printf("%.f is greater than %.f",b,a);
}