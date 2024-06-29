#include<stdio.h>

int main(){
    char a;
    printf("The character is ");
    scanf("%c",&a);
    printf("%s", a>97 && a<122?"Lowercase":"Uppercase");
    return 0;
}