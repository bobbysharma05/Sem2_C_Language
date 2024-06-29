#include<stdio.h>
int main(){
    int a,b,c,smallest=0;
    printf("Enter the numbers a, b and c : ");
    scanf("%d %d %d",&a,&b,&c);
    while((a && b)&& c){
        a--;
        b--;
        c--;
        smallest++;
    }
    printf("The smallest number is %d",smallest);
    return 0;
}