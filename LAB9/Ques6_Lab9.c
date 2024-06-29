#include<stdio.h>
int main(){
    long int i;
    FILE *ptr;
    ptr = fopen("h.txt","r+");
    if(ptr==NULL){
        printf("error");
        return(-1);
    }
    i = ftell(ptr);
    printf("%ld",i);

    fseek(ptr, 9,SEEK_SET);
    char c = fgetc(ptr);
    printf("%c",c);

    fseek(ptr,0,0);

    while ((c = fgetc(ptr))!= EOF){
        printf("%c",c);
    }

    printf("%ld",ftell(ptr));

    while((c = fgetc(ptr))!= EOF){
        printf("%c",toupper(ptr));
    }

    fclose(ptr);
    return 0;
}


