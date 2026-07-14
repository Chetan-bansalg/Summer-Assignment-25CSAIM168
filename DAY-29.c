#include <stdio.h>
#include <string.h>
#include <math.h>

/* ===================== 113. Calculator ===================== */

void calculator() {
    int choice;
    double a, b;

    while (1) {
        printf("\n===== MENU DRIVEN CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Power\n");
        printf("7. Back to Main Menu\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        if (choice == 7)
            return;

        printf("Enter Two Numbers: ");
        scanf("%lf %lf", &a, &b);

        switch (choice) {
            case 1:
                printf("Result = %.2lf\n", a + b);
                break;

            case 2:
                printf("Result = %.2lf\n", a - b);
                break;

            case 3:
                printf("Result = %.2lf\n", a * b);
                break;

            case 4:
                if (b != 0)
                    printf("Result = %.2lf\n", a / b);
                else
                    printf("Division by Zero Not Allowed\n");
                break;

            case 5:
                printf("Result = %d\n", (int)a % (int)b);
                break;

            case 6:
                printf("Result = %.2lf\n", pow(a, b));
                break;

            default:
                printf("Invalid Choice\n");
        }
    }
}

/* ===================== 114. Array Operations ===================== */

void arrayOperations() {
    int arr[100], n, i;
    int choice, value, pos, found;

    printf("Enter Size of Array: ");
    scanf("%d", &n);

    printf("Enter %d Elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    while (1) {
        printf("\n===== ARRAY OPERATIONS =====\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Search Element\n");
        printf("5. Sum of Elements\n");
        printf("6. Back to Main Menu\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Array: ");
                for (i = 0; i < n; i++)
                    printf("%d ", arr[i]);
                printf("\n");
                break;

            case 2:
                printf("Enter Position and Value: ");
                scanf("%d %d", &pos, &value);

                for (i = n; i >= pos; i--)
                    arr[i] = arr[i - 1];

                arr[pos - 1] = value;
                n++;

                printf("Element Inserted Successfully\n");
                break;

            case 3:
                printf("Enter Position to Delete: ");
                scanf("%d", &pos);

                for (i = pos - 1; i < n - 1; i++)
                    arr[i] = arr[i + 1];

                n--;

                printf("Element Deleted Successfully\n");
                break;

            case 4:
                printf("Enter Element to Search: ");
                scanf("%d", &value);

                found = 0;

                for (i = 0; i < n; i++) {
                    if (arr[i] == value) {
                        printf("Element Found at Position %d\n", i + 1);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Element Not Found\n");

                break;

            case 5: {
                int sum = 0;

                for (i = 0; i < n; i++)
                    sum += arr[i];

                printf("Sum = %d\n", sum);
                break;
            }

            case 6:
                return;

            default:
                printf("Invalid Choice\n");
        }
    }
}

/* ===================== 115. String Operations ===================== */

void stringOperations() {
    char str1[100], str2[100], temp[100];
    int choice, i, len;

    printf("Enter String: ");
    scanf(" %[^\n]", str1);

    while (1) {
        printf("\n===== STRING OPERATIONS =====\n");
        printf("1. Length of String\n");
        printf("2. Copy String\n");
        printf("3. Concatenate String\n");
        printf("4. Compare String\n");
        printf("5. Reverse String\n");
        printf("6. Back to Main Menu\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Length = %lu\n", strlen(str1));
                break;

            case 2:
                strcpy(temp, str1);
                printf("Copied String = %s\n", temp);
                break;

            case 3:
                printf("Enter Second String: ");
                scanf(" %[^\n]", str2);

                strcat(str1, str2);

                printf("Result = %s\n", str1);
                break;

            case 4:
                printf("Enter Second String: ");
                scanf(" %[^\n]", str2);

                if (strcmp(str1, str2) == 0)
                    printf("Strings are Equal\n");
                else
                    printf("Strings are Not Equal\n");

                break;

            case 5:
                strcpy(temp, str1);

                len = strlen(temp);

                for (i = 0; i < len / 2; i++) {
                    char ch = temp[i];
                    temp[i] = temp[len - i - 1];
                    temp[len - i - 1] = ch;
                }

                printf("Reversed String = %s\n", temp);
                break;

            case 6:
                return;

            default:
                printf("Invalid Choice\n");
        }
    }
}

/* ===================== 116. Inventory Management ===================== */

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

void inventoryManagement() {
    struct Item items[100];
    int count = 0;
    int choice, i, searchId;

    while (1) {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Update Quantity\n");
        printf("5. Back to Main Menu\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter Item ID: ");
                scanf("%d", &items[count].id);

                printf("Enter Item Name: ");
                scanf(" %[^\n]", items[count].name);

                printf("Enter Quantity: ");
                scanf("%d", &items[count].quantity);

                printf("Enter Price: ");
                scanf("%f", &items[count].price);

                count++;

                printf("Item Added Successfully\n");
                break;

            case 2:
                for (i = 0; i < count; i++) {
                    printf("\nID       : %d", items[i].id);
                    printf("\nName     : %s", items[i].name);
                    printf("\nQuantity : %d", items[i].quantity);
                    printf("\nPrice    : %.2f\n", items[i].price);
                }
                break;

            case 3:
                printf("Enter Item ID to Search: ");
                scanf("%d", &searchId);

                for (i = 0; i < count; i++) {
                    if (items[i].id == searchId) {
                        printf("\nItem Found");
                        printf("\nName     : %s", items[i].name);
                        printf("\nQuantity : %d", items[i].quantity);
                        printf("\nPrice    : %.2f\n", items[i].price);
                        break;
                    }
                }

                if (i == count)
                    printf("Item Not Found\n");

                break;

            case 4:
                printf("Enter Item ID: ");
                scanf("%d", &searchId);

                for (i = 0; i < count; i++) {
                    if (items[i].id == searchId) {
                        printf("Enter New Quantity: ");
                        scanf("%d", &items[i].quantity);

                        printf("Quantity Updated Successfully\n");
                        break;
                    }
                }

                if (i == count)
                    printf("Item Not Found\n");

                break;

            case 5:
                return;

            default:
                printf("Invalid Choice\n");
        }
    }
}

/* ===================== MAIN PROGRAM ===================== */

int main() {
    int choice;

    while (1) {
        printf("\n=====================================\n");
        printf("        SELECT PROGRAM TO RUN\n");
        printf("=====================================\n");
        printf("113. Menu Driven Calculator\n");
        printf("114. Array Operations System\n");
        printf("115. String Operations System\n");
        printf("116. Inventory Management System\n");
        printf("0. Exit\n");

        printf("\nEnter Program Number: ");
        scanf("%d", &choice);

        switch (choice) {

            case 113:
                calculator();
                break;

            case 114:
                arrayOperations();
                break;

            case 115:
                stringOperations();
                break;

            case 116:
                inventoryManagement();
                break;

            case 0:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Program Number\n");
        }
    }

    return 0;
}