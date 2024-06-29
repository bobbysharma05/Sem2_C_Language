#include<stdio.h>
int main(){
    int a[10];
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<10;i++){
        int small=a[i], idx=i, flag = 0;
        for(int j=i+1;j<10;j++){
            if(a[j]<small){
                small = a[j];
                idx = j;
                flag=1;
            }
        }
        if(flag){
        a[idx]=a[i];
        a[i]=small;
        }
    }
    for(int i=0;i<10;i++)
    printf("%3d",a[i]);
    return 0;
}