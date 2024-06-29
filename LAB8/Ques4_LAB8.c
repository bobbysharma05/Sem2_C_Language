#include<stdio.h>

void add(int *a,int *b){
    printf("Addition of n and m is %d\n", (*a)+(*b));
}

void subtract(int *c , int *d){
    if ((*c)>=(*d)) printf("Difference of n and m is %d\n",(*c)-(*d));
    else if ((*c)<(*d)) printf("Difference of n and m is %d\n",(*d)-(*c));
}

int main(){
    int n,m;
    printf("Enter the value of n,m = ");
    scanf("%d %d", &n , &m);
    fflush(stdin);
    add(&n,&m);
    subtract(&n,&m);
    return 0;
}