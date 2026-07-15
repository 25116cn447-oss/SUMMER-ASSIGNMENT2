#include <stdio.h>

int main() {
    int totalSeats = 50;
    int booked, available;

    printf("Total Seats Available: %d\n", totalSeats);

    printf("Enter number of seats to book: ");
    scanf("%d", &booked);

    if (booked <= totalSeats) {
        available = totalSeats - booked;
        printf("\nBooking Successful!\n");
        printf("Booked Seats   : %d\n", booked);
        printf("Available Seats: %d\n", available);
    } else {
        printf("\nBooking Failed! Not enough seats available.\n");
    }

    return 0;
}