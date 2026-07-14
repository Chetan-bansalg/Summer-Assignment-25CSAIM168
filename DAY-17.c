#include <stdio.h>

int main() {
    int choice;

    printf("Choose a program to run:\n");
    printf("65. Merge Arrays\n");
    printf("66. Union of Arrays\n");
    printf("67. Intersection of Arrays\n");
    printf("68. Find Common Elements\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        // 65. Merge Arrays
        case 65: {
            int n1, n2, i;

            printf("Enter size of first array: ");
            scanf("%d", &n1);
            int arr1[n1];

            printf("Enter elements of first array:\n");
            for(i = 0; i < n1; i++)
                scanf("%d", &arr1[i]);

            printf("Enter size of second array: ");
            scanf("%d", &n2);
            int arr2[n2];

            printf("Enter elements of second array:\n");
            for(i = 0; i < n2; i++)
                scanf("%d", &arr2[i]);

            int merged[n1 + n2];

            for(i = 0; i < n1; i++)
                merged[i] = arr1[i];

            for(i = 0; i < n2; i++)
                merged[n1 + i] = arr2[i];

            printf("Merged Array:\n");
            for(i = 0; i < n1 + n2; i++)
                printf("%d ", merged[i]);

            printf("\n");
            break;
        }

        // 66. Union of Arrays
        case 66: {
            int n1, n2, i, j, exists;

            printf("Enter size of first array: ");
            scanf("%d", &n1);
            int arr1[n1];

            printf("Enter elements of first array:\n");
            for(i = 0; i < n1; i++)
                scanf("%d", &arr1[i]);

            printf("Enter size of second array: ");
            scanf("%d", &n2);
            int arr2[n2];

            printf("Enter elements of second array:\n");
            for(i = 0; i < n2; i++)
                scanf("%d", &arr2[i]);

            int unionArr[n1 + n2];
            int size = 0;

            for(i = 0; i < n1; i++)
                unionArr[size++] = arr1[i];

            for(i = 0; i < n2; i++) {
                exists = 0;
                for(j = 0; j < size; j++) {
                    if(arr2[i] == unionArr[j]) {
                        exists = 1;
                        break;
                    }
                }
                if(!exists)
                    unionArr[size++] = arr2[i];
            }

            printf("Union of Arrays:\n");
            for(i = 0; i < size; i++)
                printf("%d ", unionArr[i]);

            printf("\n");
            break;
        }

        // 67. Intersection of Arrays
        case 67: {
            int n1, n2, i, j;

            printf("Enter size of first array: ");
            scanf("%d", &n1);
            int arr1[n1];

            printf("Enter elements of first array:\n");
            for(i = 0; i < n1; i++)
                scanf("%d", &arr1[i]);

            printf("Enter size of second array: ");
            scanf("%d", &n2);
            int arr2[n2];

            printf("Enter elements of second array:\n");
            for(i = 0; i < n2; i++)
                scanf("%d", &arr2[i]);

            printf("Intersection of Arrays:\n");
            for(i = 0; i < n1; i++) {
                for(j = 0; j < n2; j++) {
                    if(arr1[i] == arr2[j]) {
                        printf("%d ", arr1[i]);
                        break;
                    }
                }
            }

            printf("\n");
            break;
        }

        // 68. Find Common Elements
        case 68: {
            int n1, n2, i, j, found;

            printf("Enter size of first array: ");
            scanf("%d", &n1);
            int arr1[n1];

            printf("Enter elements of first array:\n");
            for(i = 0; i < n1; i++)
                scanf("%d", &arr1[i]);

            printf("Enter size of second array: ");
            scanf("%d", &n2);
            int arr2[n2];

            printf("Enter elements of second array:\n");
            for(i = 0; i < n2; i++)
                scanf("%d", &arr2[i]);

            printf("Common Elements:\n");
            for(i = 0; i < n1; i++) {
                found = 0;

                for(j = 0; j < n2; j++) {
                    if(arr1[i] == arr2[j]) {
                        found = 1;
                        break;
                    }
                }

                if(found)
                    printf("%d ", arr1[i]);
            }

            printf("\n");
            break;
        }

        default:
            printf("Invalid choice! Please select between 65 and 68.\n");
    }

    return 0;
}