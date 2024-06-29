#include<stdio.h>

int main(){
    char c[13] = "Hello, World";
    //01
    printf("|%s|\n",c);
    //02
    printf("|%.10s|\n", c);
    //03
    printf("|%-15s|\n",c);
    //04
    printf("|%15s|\n",c);
    //05
    printf("|%15.10s|", c);
    //06
    printf("|%-15.10s|", c);
    return 0;
}   