#include<stdio.h>

void endless(char);
int main(){
    char c;
    printf("Enter the character = ");
    scanf("\n%c",&c);
    endless(c);
    return 0;
}

void endless(char x){
    int i=0;
    while(x!='!'){
        printf("Enter the character = ");
        scanf("\n%c",&x);
        i++;
    }
    if(x=='!'){
            printf("Its over.");
    }
    
}