#include<stdio.h>
#include<string.h>
int main(){
    char str1[50];
    char str2[50];
    char str[1000];

    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);
    fflush(stdin);

    int i=0,k=0;
    while(str1[i]!='\0'){
        str[i] = str1[i]; 
        i++;
    }
    int l=i;
    //printf("%d",i);
    while(str2[k]!='\0'){
        str[l] = str2[k];
        k++;l++;
    }
    str[l]='\0';

    for(int i=0;str[i]!='\0';i++){
        printf("%c",str[i]);
    }
    return 0;
}