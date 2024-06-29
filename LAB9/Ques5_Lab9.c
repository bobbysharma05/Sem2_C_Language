#include<stdio.h>

typedef union{
    int choco_chip;
    float cream;
}flavour;

typedef struct {
    float flour;
    int eggs;
    int baking_powder;
    float butter;
    flavour fla;
}ingredients;

void printfunc(ingredients cupcake, int n){
    for (int i=0;i<1; i++){
        printf("%f\n %d\n", cupcake.flour,cupcake.eggs);
        printf("%d\n",cupcake.baking_powder);
        printf("%f\n",cupcake.butter);
        if (n==0) printf("%d",cupcake.fla.choco_chip);
        else printf("%f",cupcake.fla.cream);

    }
}


int main(){
    ingredients cupcake;int n;
    for(int i=0;i<1;i++){        
        printf("The First name of the employee : ");
        scanf(" %f",&cupcake.flour);

        printf("The Last name of the employee : ");
        scanf(" %d",&cupcake.eggs);

        printf("The Year of joining the company : ");
        scanf("%d",&cupcake.baking_powder);

        printf("The Salary : ");
        scanf("%f", &cupcake.butter);

        printf("Do you want chocochip(0) or cream (1) : ");
        scanf("%d",&n);
        //fgets(n,10,stdin);
        if (n==0) scanf("%d",&cupcake.fla.choco_chip);
        else scanf("%f",&cupcake.fla.cream);
    }

    printfunc(cupcake,n);
    return 0;
}
