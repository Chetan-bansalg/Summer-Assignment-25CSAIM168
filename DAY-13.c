#include <stdio.h>

int main() {
    int choice, n, i;
    int arr[100];
    int sum, largest, smallest, even, odd;

    printf("Choose a program to run:\n");
    printf("49. Input and Display Array\n");
    printf("50. Find Sum and Average of Array\n");
    printf("51. Find Largest and Smallest Element\n");
    printf("52. Count Even and Odd Elements\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 49:
            printf("Enter size of array: ");
            scanf("%d", &n);

            printf("Enter %d elements:\n", n);
            for(i = 0; i < n; i++)
                scanf("%d", &arr[i]);

            printf("Array elements are:\n");
            for(i = 0; i < n; i++)
                printf("%d ", arr[i]);

            printf("\n");
            break;

        case 50:
            sum = 0;

            printf("Enter size of array: ");
            scanf("%d", &n);

            printf("Enter %d elements:\n", n);
            for(i = 0; i < n; i++) {
                scanf("%d", &arr[i]);
                sum += arr[i];
            }

            printf("Sum = %d\n", sum);
            printf("Average = %.2f\n", (float)sum / n);
            break;

        case 51:
            printf("Enter size of array: ");
            scanf("%d", &n);

            printf("Enter %d elements:\n", n);
            for(i = 0; i < n; i++)
                scanf("%d", &arr[i]);

            largest = smallest = arr[0];

            for(i = 1; i < n; i++) {
                if(arr[i] > largest)
                    largest = arr[i];

                if(arr[i] < smallest)
                    smallest = arr[i];
            }

            printf("Largest Element = %d\n", largest);
            printf("Smallest Element = %d\n", smallest);
            break;

        case 52:
            even = odd = 0;

            printf("Enter size of array: ");
            scanf("%d", &n);

            printf("Enter %d elements:\n", n);
            for(i = 0; i < n; i++)
                scanf("%d", &arr[i]);

            for(i = 0; i < n; i++) {
                if(arr[i] % 2 == 0)
                    even++;
                else
                    odd++;
            }

            printf("Even Elements = %d\n", even);
            printf("Odd Elements = %d\n", odd);
            break;

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}