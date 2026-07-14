#include <stdio.h>

int main() {
    int choice, n, i, j, key;
    int arr[100];
    int found = 0, freq = 0;
    int largest, secondLargest;

    printf("Choose a program to run:\n");
    printf("53. Linear Search\n");
    printf("54. Frequency of an Element\n");
    printf("55. Second Largest Element\n");
    printf("56. Find Duplicates in Array\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 53:
            printf("Enter size of array: ");
            scanf("%d", &n);

            printf("Enter %d elements:\n", n);
            for(i = 0; i < n; i++)
                scanf("%d", &arr[i]);

            printf("Enter element to search: ");
            scanf("%d", &key);

            found = 0;
            for(i = 0; i < n; i++) {
                if(arr[i] == key) {
                    printf("Element found at position %d\n", i + 1);
                    found = 1;
                    break;
                }
            }

            if(found == 0)
                printf("Element not found.\n");

            break;

        case 54:
            printf("Enter size of array: ");
            scanf("%d", &n);

            printf("Enter %d elements:\n", n);
            for(i = 0; i < n; i++)
                scanf("%d", &arr[i]);

            printf("Enter element to find frequency: ");
            scanf("%d", &key);

            freq = 0;
            for(i = 0; i < n; i++) {
                if(arr[i] == key)
                    freq++;
            }

            printf("Frequency of %d = %d\n", key, freq);
            break;

        case 55:
            printf("Enter size of array: ");
            scanf("%d", &n);

            printf("Enter %d elements:\n", n);
            for(i = 0; i < n; i++)
                scanf("%d", &arr[i]);

            largest = secondLargest = -99999;

            for(i = 0; i < n; i++) {
                if(arr[i] > largest) {
                    secondLargest = largest;
                    largest = arr[i];
                }
                else if(arr[i] > secondLargest && arr[i] != largest) {
                    secondLargest = arr[i];
                }
            }

            printf("Second Largest Element = %d\n", secondLargest);
            break;

        case 56:
            printf("Enter size of array: ");
            scanf("%d", &n);

            printf("Enter %d elements:\n", n);
            for(i = 0; i < n; i++)
                scanf("%d", &arr[i]);

            printf("Duplicate Elements are:\n");

            found = 0;
            for(i = 0; i < n; i++) {
                for(j = i + 1; j < n; j++) {
                    if(arr[i] == arr[j]) {
                        printf("%d ", arr[i]);
                        found = 1;
                        break;
                    }
                }
            }

            if(found == 0)
                printf("No duplicate elements found.");

            printf("\n");
            break;

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}