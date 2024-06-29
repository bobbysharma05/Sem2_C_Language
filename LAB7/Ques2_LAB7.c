#include<stdio.h>
int main(){
    char arr1[6];
    char arr2[6];
    fgets(arr1,sizeof(arr1),stdin);
    fgets(arr2,sizeof(arr2),stdin);
    
    for(int i=0,j=0;i<6,j<6;i++,j++){
        if(arr1[i]>arr2[j]){
            puts(arr1);
            break;
        }
        else if(arr1[i]<arr2[j]){
            puts(arr2);
            break;
        }
        else{
            continue;
        }
    }
    return 0;
}