#include <stdio.h>

int total_seats; 
void booking() {
    int requested_seats;

    printf("Enter the number of seats you want to book: ");
    if (scanf("%d", &requested_seats) != 1) {
        fprintf(stderr, "Error: Invalid input for number of seats.\n");
        return;
    }

    if (requested_seats > total_seats) {
        printf("Sorry, only %d seats are available.\n", total_seats);
    } else if (requested_seats == total_seats) {
        total_seats -= requested_seats;
        printf("Your tickets are booked!\n");
    } else {
        total_seats -= requested_seats;
        printf("Out of your requested seats, only %d are available.\n", requested_seats);
    }
}


void cancellation() {
    int cancel_seats;

    printf("Enter the number of seats you want to cancel: ");
    if (scanf("%d", &cancel_seats) != 1) {
        fprintf(stderr, "Error: Invalid input for number of seats.\n");
        return;
    }

    if (cancel_seats > total_seats) {
        printf("Sorry, you cannot cancel more seats than available (%d).\n", total_seats);
    } else {
        total_seats += cancel_seats;
        printf("%d seats cancelled successfully.\n", cancel_seats);
    }
}

int main() {

    printf("Enter the total number of seats: ");
    if (scanf("%d", &total_seats) != 1) {
        fprintf(stderr, "Error: Invalid input for total seats.\n");
        return 1;
    }

    char choice;
    do {
        printf("\nMenu:\n");
        printf("1. Booking\n");
        printf("2. Cancellation\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");

        if (scanf(" %c", &choice) != 1) { 
            fprintf(stderr, "Error: Invalid input for choice.\n");
            return 1;
        }

        switch (choice) {
            case '1':
                booking();
                break;
            case '2':
                cancellation();
                break;
            case '3':
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != '3');

    return 0;
}
