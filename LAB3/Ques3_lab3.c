#include<stdio.h>
int main(){
    int k;
    for(int i=0;i<10;i++){
        printf("Enter the value of k = ");
        scanf("%d",&k);
        if(k==0){
            continue;
        }
        else{
            for(int j=0;j<10;j++){
                printf("%.1f",j/k);
        } 
    }
    return 0;
}
}