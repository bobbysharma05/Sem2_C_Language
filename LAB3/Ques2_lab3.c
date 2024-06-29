#include<stdio.h>
#include<stdlib.h>
int main(){
    

    int ch,n,flag,j,fact,c;
    printf("Enter the choice from 1 to 4 :");
    scanf("%d",&ch);
    switch(ch){
        case 1: 
                printf("Enter the number = ");
                scanf("%d",&n);
                switch(n%2){
                    case(0): printf("It is a even number.");
                            break;
                    case(1): printf("IT is odd number.");
                }
                break;
        case 2: 
                printf("Enter the number = ");
                scanf("%d",&n);
                for(int i=2;i<n;i++){
                    switch(n%i){
                        case 0: printf("It is not prime.");
                                flag =1;
                                break;
                    }
                    switch(!(flag)){
                        case 0: printf("It is prime.");
                    }
                }
                break;
        case 3: 
                printf("Enter the number = ");
                scanf("%d",&c);
                j=1;
                fact =1;
                while(j<=c){
                        fact = fact*j;
                        j++;  
                }
                printf("The factorial of %d is %d",c,fact);
                break;

        case 4: exit(0);

    }
    return 0;
}