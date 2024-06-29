#include<stdio.h>
int main(){
    char str[4];

    scanf("%s",str);
    
    for(int i=0;i<3;i++){
        for(int j =i+1;j<4;j++){
            if (str[i]>str[j]){
                char temp = str[j];
                str[j] = str[i];
                str[i] = temp;
            }
        }
    }

    for(int i=0;i<4;i++){
        printf("%c",str[i]);
        
    }

    return 0;
}