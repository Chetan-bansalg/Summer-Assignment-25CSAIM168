#include <stdio.h>
#include <string.h>

/* ---------------- Library Management ---------------- */

struct Book {
    int id;
    char title[50];
    char author[50];
};

void libraryManagement() {
    struct Book books[100];
    int count = 0, choice, searchId, i;

    while (1) {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Back to Main Menu\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &books[count].id);

                printf("Enter Book Title: ");
                scanf(" %[^\n]", books[count].title);

                printf("Enter Author Name: ");
                scanf(" %[^\n]", books[count].author);

                count++;
                break;

            case 2:
                for (i = 0; i < count; i++) {
                    printf("\nID: %d", books[i].id);
                    printf("\nTitle: %s", books[i].title);
                    printf("\nAuthor: %s\n", books[i].author);
                }
                break;

            case 3:
                printf("Enter Book ID to Search: ");
                scanf("%d", &searchId);

                for (i = 0; i < count; i++) {
                    if (books[i].id == searchId) {
                        printf("\nBook Found");
                        printf("\nTitle: %s", books[i].title);
                        printf("\nAuthor: %s\n", books[i].author);
                        break;
                    }
                }

                if (i == count)
                    printf("Book Not Found\n");
                break;

            case 4:
                return;

            default:
                printf("Invalid Choice\n");
        }
    }
}

/* ---------------- Bank Account System ---------------- */

void bankSystem() {
    float balance = 0, amount;
    int choice;

    while (1) {
        printf("\n===== Bank Account System =====\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Back to Main Menu\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Amount: ");
                scanf("%f", &amount);
                balance += amount;
                break;

            case 2:
                printf("Enter Amount: ");
                scanf("%f", &amount);

                if (amount <= balance)
                    balance -= amount;
                else
                    printf("Insufficient Balance\n");
                break;

            case 3:
                printf("Current Balance = %.2f\n", balance);
                break;

            case 4:
                return;

            default:
                printf("Invalid Choice\n");
        }
    }
}

/* ---------------- Ticket Booking System ---------------- */

void ticketBooking() {
    int seats[10] = {0};
    int choice, seat, i;

    while (1) {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. View Seats\n");
        printf("3. Cancel Ticket\n");
        printf("4. Back to Main Menu\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Seat Number (1-10): ");
                scanf("%d", &seat);

                if (seat >= 1 && seat <= 10) {
                    if (seats[seat - 1] == 0) {
                        seats[seat - 1] = 1;
                        printf("Ticket Booked\n");
                    } else {
                        printf("Seat Already Booked\n");
                    }
                }
                break;

            case 2:
                for (i = 0; i < 10; i++) {
                    printf("Seat %d : %s\n", i + 1,
                           seats[i] ? "Booked" : "Available");
                }
                break;

            case 3:
                printf("Enter Seat Number to Cancel: ");
                scanf("%d", &seat);

                if (seat >= 1 && seat <= 10) {
                    seats[seat - 1] = 0;
                    printf("Ticket Cancelled\n");
                }
                break;

            case 4:
                return;

            default:
                printf("Invalid Choice\n");
        }
    }
}

/* ---------------- Contact Management System ---------------- */

struct Contact {
    char name[50];
    char phone[20];
};

void contactManagement() {
    struct Contact contacts[100];
    int count = 0, choice, i;
    char searchName[50];

    while (1) {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Back to Main Menu\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Name: ");
                scanf(" %[^\n]", contacts[count].name);

                printf("Enter Phone Number: ");
                scanf("%s", contacts[count].phone);

                count++;
                break;

            case 2:
                for (i = 0; i < count; i++) {
                    printf("\nName : %s", contacts[i].name);
                    printf("\nPhone: %s\n", contacts[i].phone);
                }
                break;

            case 3:
                printf("Enter Name to Search: ");
                scanf(" %[^\n]", searchName);

                for (i = 0; i < count; i++) {
                    if (strcmp(contacts[i].name, searchName) == 0) {
                        printf("\nName : %s", contacts[i].name);
                        printf("\nPhone: %s\n", contacts[i].phone);
                        break;
                    }
                }

                if (i == count)
                    printf("Contact Not Found\n");
                break;

            case 4:
                return;

            default:
                printf("Invalid Choice\n");
        }
    }
}

/* ---------------- Main Program ---------------- */

int main() {
    int choice;

    while (1) {
        printf("\n=================================\n");
        printf("        MINI PROJECT MENU\n");
        printf("=================================\n");
        printf("109. Library Management System\n");
        printf("110. Bank Account System\n");
        printf("111. Ticket Booking System\n");
        printf("112. Contact Management System\n");
        printf("0. Exit\n");
        printf("Enter Program Number to Run: ");
        scanf("%d", &choice);

        switch (choice) {
            case 109:
                libraryManagement();
                break;

            case 110:
                bankSystem();
                break;

            case 111:
                ticketBooking();
                break;

            case 112:
                contactManagement();
                break;

            case 0:
                printf("Exiting Program...\n");
                return 0;

            default:
                printf("Invalid Program Number\n");
        }
    }

    return 0;
}