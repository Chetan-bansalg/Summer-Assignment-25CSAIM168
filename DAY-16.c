#include <stdio.h>

int main() {
    int choice;

    printf("Choose a program to run:\n");
    printf("61. Find Missing Number in Array\n");
    printf("62. Find Maximum Frequency Element\n");
    printf("63. Find Pair with Given Sum\n");
    printf("64. Remove Duplicates from Array\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        // 61. Find Missing Number in Array
        case 61: {
            int n, i, sum = 0, total;

            printf("Enter size of array (n-1): ");
            scanf("%d", &n);

            int arr[n];

            printf("Enter %d elements from 1 to %d with one missing:\n", n, n + 1);
            for(i = 0; i < n; i++) {
                scanf("%d", &arr[i]);
                sum += arr[i];
            }

            total = (n + 1) * (n + 2) / 2;

            printf("Missing number = %d\n", total - sum);
            break;
        }

        // 62. Find Maximum Frequency Element
        case 62: {
            int n, i, j, maxFreq = 0, element = 0;

            printf("Enter size of array: ");
            scanf("%d", &n);

            int arr[n];

            printf("Enter array elements:\n");
            for(i = 0; i < n; i++)
                scanf("%d", &arr[i]);

            for(i = 0; i < n; i++) {
                int count = 1;

                for(j = i + 1; j < n; j++) {
                    if(arr[i] == arr[j])
                        count++;
                }

                if(count > maxFreq) {
                    maxFreq = count;
                    element = arr[i];
                }
            }

            printf("Element with maximum frequency = %d\n", element);
            printf("Frequency = %d\n", maxFreq);
            break;
        }

        // 63. Find Pair with Given Sum
        case 63: {
            int n, i, j, target, found = 0;

            printf("Enter size of array: ");
            scanf("%d", &n);

            int arr[n];

            printf("Enter array elements:\n");
            for(i = 0; i < n; i++)
                scanf("%d", &arr[i]);

            printf("Enter target sum: ");
            scanf("%d", &target);

            for(i = 0; i < n; i++) {
                for(j = i + 1; j < n; j++) {
                    if(arr[i] + arr[j] == target) {
                        printf("Pair found: %d and %d\n", arr[i], arr[j]);
                        found = 1;
                    }
                }
            }

            if(!found)
                printf("No pair found.\n");

            break;
        }

        // 64. Remove Duplicates from Array
        case 64: {
            int n, i, j, k;

            printf("Enter size of array: ");
            scanf("%d", &n);

            int arr[n];

            printf("Enter array elements:\n");
            for(i = 0; i < n; i++)
                scanf("%d", &arr[i]);

            for(i = 0; i < n; i++) {
                for(j = i + 1; j < n; ) {
                    if(arr[i] == arr[j]) {
                        for(k = j; k < n - 1; k++)
                            arr[k] = arr[k + 1];
                        n--;
                    } else {
                        j++;
                    }
                }
            }

            printf("Array after removing duplicates:\n");
            for(i = 0; i < n; i++)
                printf("%d ", arr[i]);

            printf("\n");
            break;
        }

        default:
            printf("Invalid choice! Please select between 61 and 64.\n");
    }

    return 0;
}