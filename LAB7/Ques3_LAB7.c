#include<stdio.h>
int main(){
    char arr[10];
    char sub_arr[10];
    fgets(arr,sizeof(arr),stdin);
    printf("Enter the substring = ");
    fgets(sub_arr,sizeof(sub_arr),stdin);

    for(int i=0;i< sizeof(arr);i++){
        for(int j =0;j< sizeof(sub_arr);j++){
            if(arr[i]!=sub_arr[j]) break;
            else{
                for(int k=j+1;k< sizeof(sub_arr);k++){
                    if(arr[i+1]==sub_arr[k]){
                        printf("YES");
                        break;
                    }
                    else{
                        break;
                    }
                }
                break;
            }
        }
    }
    return 0;
}