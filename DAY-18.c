#include <stdio.h>

int main() {
    int choice;

    printf("Choose a program to run:\n");
    printf("69. Bubble Sort\n");
    printf("70. Selection Sort\n");
    printf("71. Binary Search\n");
    printf("72. Sort Array in Descending Order\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        // 69. Bubble Sort
        case 69: {
            int n, i, j, temp;

            printf("Enter size of array: ");
            scanf("%d", &n);

            int arr[n];

            printf("Enter array elements:\n");
            for(i = 0; i < n; i++)
                scanf("%d", &arr[i]);

            for(i = 0; i < n - 1; i++) {
                for(j = 0; j < n - i - 1; j++) {
                    if(arr[j] > arr[j + 1]) {
                        temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }

            printf("Sorted Array using Bubble Sort:\n");
            for(i = 0; i < n; i++)
                printf("%d ", arr[i]);

            printf("\n");
            break;
        }

        // 70. Selection Sort
        case 70: {
            int n, i, j, minIndex, temp;

            printf("Enter size of array: ");
            scanf("%d", &n);

            int arr[n];

            printf("Enter array elements:\n");
            for(i = 0; i < n; i++)
                scanf("%d", &arr[i]);

            for(i = 0; i < n - 1; i++) {
                minIndex = i;

                for(j = i + 1; j < n; j++) {
                    if(arr[j] < arr[minIndex])
                        minIndex = j;
                }

                temp = arr[i];
                arr[i] = arr[minIndex];
                arr[minIndex] = temp;
            }

            printf("Sorted Array using Selection Sort:\n");
            for(i = 0; i < n; i++)
                printf("%d ", arr[i]);

            printf("\n");
            break;
        }

        // 71. Binary Search
        case 71: {
            int n, i, key;
            int low, high, mid, found = 0;

            printf("Enter size of sorted array: ");
            scanf("%d", &n);

            int arr[n];

            printf("Enter sorted array elements:\n");
            for(i = 0; i < n; i++)
                scanf("%d", &arr[i]);

            printf("Enter element to search: ");
            scanf("%d", &key);

            low = 0;
            high = n - 1;

            while(low <= high) {
                mid = (low + high) / 2;

                if(arr[mid] == key) {
                    found = 1;
                    break;
                }
                else if(arr[mid] < key)
                    low = mid + 1;
                else
                    high = mid - 1;
            }

            if(found)
                printf("Element found at position %d\n", mid + 1);
            else
                printf("Element not found.\n");

            break;
        }

        // 72. Sort Array in Descending Order
        case 72: {
            int n, i, j, temp;

            printf("Enter size of array: ");
            scanf("%d", &n);

            int arr[n];

            printf("Enter array elements:\n");
            for(i = 0; i < n; i++)
                scanf("%d", &arr[i]);

            for(i = 0; i < n - 1; i++) {
                for(j = i + 1; j < n; j++) {
                    if(arr[i] < arr[j]) {
                        temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }

            printf("Array sorted in descending order:\n");
            for(i = 0; i < n; i++)
                printf("%d ", arr[i]);

            printf("\n");
            break;
        }

        default:
            printf("Invalid choice! Please select between 69 and 72.\n");
    }

    return 0;
}