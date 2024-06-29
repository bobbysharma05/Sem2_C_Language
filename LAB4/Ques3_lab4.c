#include<stdio.h>

int main(){
    int upc=0,lwc =0;
    char n;
    for(int i=0;i<=20;i++){
        printf("Enter the character = \n");
        scanf("\n%c",&n);

        if(n>=65 && n<=90){
            upc++;
        }
        else if (n>=97 && n<=122)
        {
            lwc++;
        }


        if (lwc<upc){
            printf("Uppercase is greater then Lowercase.\n");
        }
        else if (lwc>upc)
        {
            printf("Lowercase is greater then Uppercase.\n");
        }
        else{
            printf("ERROR : It is not an alphabet.\n");
        }
    }
    return 0;
}