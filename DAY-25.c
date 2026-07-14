
#include <stdio.h>

int main() {
    int choice;

    printf("Choose a program to run:\n");
    printf("97. Merge Two Sorted Arrays\n");
    printf("98. Find Common Characters in Strings\n");
    printf("99. Sort Names Alphabetically\n");
    printf("100. Sort Words by Length\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        // 97. Merge Two Sorted Arrays
        case 97: {
            int n1, n2, i = 0, j = 0, k = 0;

            printf("Enter size of first sorted array: ");
            scanf("%d", &n1);

            int arr1[n1];
            printf("Enter elements of first sorted array:\n");
            for(int x = 0; x < n1; x++)
                scanf("%d", &arr1[x]);

            printf("Enter size of second sorted array: ");
            scanf("%d", &n2);

            int arr2[n2];
            printf("Enter elements of second sorted array:\n");
            for(int x = 0; x < n2; x++)
                scanf("%d", &arr2[x]);

            int merged[n1 + n2];

            while(i < n1 && j < n2) {
                if(arr1[i] <= arr2[j])
                    merged[k++] = arr1[i++];
                else
                    merged[k++] = arr2[j++];
            }

            while(i < n1)
                merged[k++] = arr1[i++];

            while(j < n2)
                merged[k++] = arr2[j++];

            printf("Merged Sorted Array:\n");
            for(i = 0; i < n1 + n2; i++)
                printf("%d ", merged[i]);

            printf("\n");
            break;
        }

        // 98. Find Common Characters in Strings
        case 98: {
            char str1[100], str2[100];
            int i, j, found;

            printf("Enter first string: ");
            scanf(" %[^\n]", str1);

            printf("Enter second string: ");
            scanf(" %[^\n]", str2);

            printf("Common characters: ");

            for(i = 0; str1[i] != '\0'; i++) {
                found = 0;

                for(j = 0; str2[j] != '\0'; j++) {
                    if(str1[i] == str2[j]) {
                        found = 1;
                        break;
                    }
                }

                if(found) {
                    int duplicate = 0;
                    for(j = 0; j < i; j++) {
                        if(str1[j] == str1[i]) {
                            duplicate = 1;
                            break;
                        }
                    }

                    if(!duplicate)
                        printf("%c ", str1[i]);
                }
            }

            printf("\n");
            break;
        }

        // 99. Sort Names Alphabetically
        case 99: {
            int n, i, j;
            char names[20][50], temp[50];

            printf("Enter number of names: ");
            scanf("%d", &n);

            printf("Enter names:\n");
            for(i = 0; i < n; i++)
                scanf("%s", names[i]);

            for(i = 0; i < n - 1; i++) {
                for(j = i + 1; j < n; j++) {
                    int k = 0;

                    while(names[i][k] == names[j][k] &&
                          names[i][k] != '\0' &&
                          names[j][k] != '\0')
                        k++;

                    if(names[i][k] > names[j][k]) {
                        int x = 0;

                        while(names[i][x] != '\0') {
                            temp[x] = names[i][x];
                            x++;
                        }
                        temp[x] = '\0';

                        x = 0;
                        while(names[j][x] != '\0') {
                            names[i][x] = names[j][x];
                            x++;
                        }
                        names[i][x] = '\0';

                        x = 0;
                        while(temp[x] != '\0') {
                            names[j][x] = temp[x];
                            x++;
                        }
                        names[j][x] = '\0';
                    }
                }
            }

            printf("Names in alphabetical order:\n");
            for(i = 0; i < n; i++)
                printf("%s\n", names[i]);

            break;
        }

        // 100. Sort Words by Length
        case 100: {
            int n, i, j;
            char words[20][50], temp[50];

            printf("Enter number of words: ");
            scanf("%d", &n);

            printf("Enter words:\n");
            for(i = 0; i < n; i++)
                scanf("%s", words[i]);

            for(i = 0; i < n - 1; i++) {
                for(j = i + 1; j < n; j++) {
                    int len1 = 0, len2 = 0;

                    while(words[i][len1] != '\0')
                        len1++;

                    while(words[j][len2] != '\0')
                        len2++;

                    if(len1 > len2) {
                        int k = 0;

                        while(words[i][k] != '\0') {
                            temp[k] = words[i][k];
                            k++;
                        }
                        temp[k] = '\0';

                        k = 0;
                        while(words[j][k] != '\0') {
                            words[i][k] = words[j][k];
                            k++;
                        }
                        words[i][k] = '\0';

                        k = 0;
                        while(temp[k] != '\0') {
                            words[j][k] = temp[k];
                            k++;
                        }
                        words[j][k] = '\0';
                    }
                }
            }

            printf("Words sorted by length:\n");
            for(i = 0; i < n; i++)
                printf("%s\n", words[i]);

            break;
        }

        default:
            printf("Invalid choice! Please select between 97 and 100.\n");
    }

    return 0;
}
