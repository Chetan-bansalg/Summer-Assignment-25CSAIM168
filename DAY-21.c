
#include <stdio.h>

int main() {
    int choice;

    printf("Choose a program to run:\n");
    printf("81. Find String Length without strlen()\n");
    printf("82. Reverse a String\n");
    printf("83. Count Vowels and Consonants\n");
    printf("84. Convert Lowercase to Uppercase\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        // 81. Find String Length without strlen()
        case 81: {
            char str[100];
            int length = 0, i;

            printf("Enter a string: ");
            scanf(" %[^\n]", str);

            for(i = 0; str[i] != '\0'; i++)
                length++;

            printf("Length of string = %d\n", length);
            break;
        }

        // 82. Reverse a String
        case 82: {
            char str[100], temp;
            int i, length = 0;

            printf("Enter a string: ");
            scanf(" %[^\n]", str);

            while(str[length] != '\0')
                length++;

            for(i = 0; i < length / 2; i++) {
                temp = str[i];
                str[i] = str[length - i - 1];
                str[length - i - 1] = temp;
            }

            printf("Reversed string = %s\n", str);
            break;
        }

        // 83. Count Vowels and Consonants
        case 83: {
            char str[100];
            int i, vowels = 0, consonants = 0;

            printf("Enter a string: ");
            scanf(" %[^\n]", str);

            for(i = 0; str[i] != '\0'; i++) {
                if((str[i] >= 'A' && str[i] <= 'Z') ||
                   (str[i] >= 'a' && str[i] <= 'z')) {

                    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
                       str[i] == 'o' || str[i] == 'u' ||
                       str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
                       str[i] == 'O' || str[i] == 'U')
                        vowels++;
                    else
                        consonants++;
                }
            }

            printf("Vowels = %d\n", vowels);
            printf("Consonants = %d\n", consonants);
            break;
        }

        // 84. Convert Lowercase to Uppercase
        case 84: {
            char str[100];
            int i;

            printf("Enter a string: ");
            scanf(" %[^\n]", str);

            for(i = 0; str[i] != '\0'; i++) {
                if(str[i] >= 'a' && str[i] <= 'z')
                    str[i] = str[i] - 32;
            }

            printf("Uppercase string = %s\n", str);
            break;
        }

        default:
            printf("Invalid choice! Please select between 81 and 84.\n");
    }

    return 0;
}