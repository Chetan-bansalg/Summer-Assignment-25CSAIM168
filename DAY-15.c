
#include <stdio.h>

int main() {
    int choice, n, i, temp, index;
    int arr[100];

    printf("Choose a program to run:\n");
    printf("57. Reverse Array\n");
    printf("58. Rotate Array Left by One Position\n");
    printf("59. Rotate Array Right by One Position\n");
    printf("60. Move Zeroes to End\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    switch(choice) {

        case 57:
            for(i = 0; i < n / 2; i++) {
                temp = arr[i];
                arr[i] = arr[n - i - 1];
                arr[n - i - 1] = temp;
            }

            printf("Reversed Array:\n");
            for(i = 0; i < n; i++)
                printf("%d ", arr[i]);
            printf("\n");
            break;

        case 58:
            temp = arr[0];

            for(i = 0; i < n - 1; i++)
                arr[i] = arr[i + 1];

            arr[n - 1] = temp;

            printf("Array after Left Rotation:\n");
            for(i = 0; i < n; i++)
                printf("%d ", arr[i]);
            printf("\n");
            break;

        case 59:
            temp = arr[n - 1];

            for(i = n - 1; i > 0; i--)
                arr[i] = arr[i - 1];

            arr[0] = temp;

            printf("Array after Right Rotation:\n");
            for(i = 0; i < n; i++)
                printf("%d ", arr[i]);
            printf("\n");
            break;

        case 60:
            index = 0;

            for(i = 0; i < n; i++) {
                if(arr[i] != 0) {
                    arr[index] = arr[i];
                    index++;
                }
            }

            while(index < n) {
                arr[index] = 0;
                index++;
            }

            printf("Array after Moving Zeroes to End:\n");
            for(i = 0; i < n; i++)
                printf("%d ", arr[i]);
            printf("\n");
            break;

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}