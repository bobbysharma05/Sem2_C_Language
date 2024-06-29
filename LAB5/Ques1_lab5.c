#include<stdio.h>
int main(){
    unsigned n=2,m=3;
   // scanf("%d %d",&n,&m);
    printf("%u",n-m); //value will be (2to power 32)-1
    return 0;  //As the range of unsigned is (0,(2 to power 32)-1)
}