#include<stdio.h>

// int gift();
int main(){
    int n;
        printf("Enter the number of  chocolate = ");
        scanf("%d",&n);
        int i=0;
        while(i<=n){
           char opt;
           printf("Do you want chocolate (Y/N) = ");
           scanf("\n%c",&opt); 

           if(opt=='Y'){
                int choc;
                printf("How many chocolates do you want = ");
                scanf("%d",&choc);
                printf("Chocolates left :%d\n",n=n - choc);  
                if(n<=0){
                    printf("You are out now.");
                }

           }
           else{
            printf("You are out now.");
            break;
           }
           i++;

        }
    return 0;
}

