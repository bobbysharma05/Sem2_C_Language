#include <stdio.h>

int min(int n, int a[]) {
    if (n <= 0) {
        return -1; 
    }
    int min_value = a[0]; 

    for (int i = 1; i < n; i++) {
        if (a[i] < min_value) {
            min_value = a[i];
        }
    }
    return min_value;
}

int main() {
    int n;

    printf("\nEnter number of elements: ");
    scanf("%d", &n);

    if (n <= 0) { 
        printf("Error: Invalid array size. Please enter a positive number.\n");
        return 1; 
    }

    int a[n];
    for (int i = 0; i < n; i++) {
        printf("\nEnter number: ");
        scanf("%d", &a[i]);
    }

    int minimum = min(n, a);

    if (minimum == -1) { 
        printf("Error: Invalid input detected.\n");
    }
    else {
        printf("\nMinimum: %d\n", minimum);
    }

    return 0;
}
