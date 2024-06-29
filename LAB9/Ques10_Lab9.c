#include<stdio.h>
#define pi 3.14
#define volume(radius,height) pi*radius*radius*height;

int main(){
    float radius1,height1;
    printf("Enter the radius and height of the cylinder : ");
    scanf("%f %f",&radius1,&height1);

    float volume1 = volume(radius1,height1)
    printf("The volume of the cyliner is %f",volume1);
    return 0;
}