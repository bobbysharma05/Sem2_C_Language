// Q4. Write a program to store employee details of 3 employees. Each employee has a name, date of birth, year of joining, salary. A date itself is composed of date, month and year. 
// a.	Create the necessary structures for the same. Store the details of all the employees in an array. Take the details from the user
// b.	Print the details. For printing, create a separate print function.

#include<stdio.h>

typedef struct {
    int date;
    int month;
    int year;
}dob;

typedef struct {
    char first_name[20];
    char last_name[20];
    dob birth;
    int yearofjoin;
    float salary;
}emp;

void printfunc(emp members[], int n){
    for (int i=0;i<n; i++){
        puts(members[i].first_name);
        puts(members[i].last_name);
        printf("\n");
        printf("%d %d %d\n",members[i].birth.date,members[i].birth.month,members[i].birth.year);
        printf("%d\n",members[i].yearofjoin);
        printf("%f\n",members[i].salary);

    }
}

int main(){
    int n;
    printf("The number of employees are : ");
    scanf("%d",&n);
    emp members[n];
    for(int i=0;i<n;i++){
        printf("The emplpoyee number %d\n",i+1);
        
        printf("The First name of the employee : ");
        scanf(" %s",members[i].first_name);
        fflush(stdin);

        printf("The Last name of the employee : ");
        scanf(" %s",members[i].last_name);

        fflush(stdin);

        printf("The Date of Birth : ");
        scanf("%d %d %d",&members[i].birth.date, &members[i].birth.month, &members[i].birth.year);

        printf("The Year of joining the company : ");
        scanf("%d",&members[i].yearofjoin);

        printf("The Salary : ");
        scanf("%f", &members[i].salary);
        fflush(stdin);
    }
    printfunc(members,n);

    return 0;
}