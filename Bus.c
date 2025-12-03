#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice, bus_choice, bus_no, seats, confirm;
    float fare, total;
    char name[30];

    while (1) {
        system("cls");  // Clear screen for Windows
        printf("\n=== BUS TICKET BOOKING SYSTEM ===\n");
        printf("1. View Available Routes\n");
        printf("2. Book Ticket\n");
        printf("=================================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            system("cls");
            printf("\n--- Available Bus Routes ---\n");
            printf("1. Bus No: 101 - Chennai to Madurai (Fare per seat: 450)\n");
            printf("2. Bus No: 102 - Chennai to Trichy (Fare per seat: 400)\n");
            printf("\nPress Enter to return to menu...");
            getchar();
            getchar();
        }

        else if (choice == 2) {
            system("cls");
            printf("\nEnter your name: ");
            scanf(" %[^\n]", name);

            printf("\nSelect a bus:\n");
            printf("1. Bus No: 101 - Chennai to Madurai (Fare: 450)\n");
            printf("2. Bus No: 102 - Chennai to Trichy (Fare: 400)\n");
            printf("Enter your choice: ");
            scanf("%d", &bus_choice);

            if (bus_choice == 1) {
                bus_no = 101;
                fare = 450;
            } else if (bus_choice == 2) {
                bus_no = 102;
                fare = 400;
            } else {
                printf("\nInvalid bus choice!\n");
                printf("Press Enter to try again...");
                getchar();
                getchar();
                continue;
            }

            printf("Enter number of seats: ");
            scanf("%d", &seats);

            total = fare * seats;

            printf("\n--- Ticket Preview ---\n");
            printf("Passenger: %s\n", name);
            printf("Bus No: %d\n", bus_no);
            printf("Seats: %d\n", seats);
            printf("Total Fare: %.2f\n", total);

            printf("\nConfirm booking? (1 = Yes / 0 = No): ");
            scanf("%d", &confirm);

            if (confirm == 1) {
                system("cls");
                printf("\n============================\n");
                printf("        BUS TICKET\n");
                printf("============================\n");
                printf("Passenger Name: %s\n", name);
                printf("Bus Number    : %d\n", bus_no);
                if (bus_no == 101)
                    printf("Route         : Chennai to Madurai\n");
                else
                    printf("Route         : Chennai to Trichy\n");
                printf("No. of Seats  : %d\n", seats);
                printf("Fare per Seat : %.2f\n", fare);
                printf("Total Fare    : %.2f\n", total);
                printf("============================\n");
                printf("  Have a Safe Journey!\n");
                printf("============================\n");
                printf("\nThank you for booking!\n");

                getchar();
                getchar();
                break;
            } else {
                printf("\nBooking Cancelled.\n");
                printf("Press Enter to return to menu...");
                getchar();
                getchar();
            }
        }

        else {
            printf("\nInvalid choice! Please try again.\n");
            printf("Press Enter to return to menu...");
            getchar();
            getchar();
        }
    }

    return 0;
}
