#include <stdio.h>

int main() {
    int choice;

    printf("Choose a program to run:\n");
    printf("85. Check Palindrome String\n");
    printf("86. Count Words in a Sentence\n");
    printf("87. Character Frequency\n");
    printf("88. Remove Spaces from String\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        // 85. Check Palindrome String
        case 85: {
            char str[100];
            int i, length = 0, palindrome = 1;

            printf("Enter a string: ");
            scanf(" %[^\n]", str);

            while(str[length] != '\0')
                length++;

            for(i = 0; i < length / 2; i++) {
                if(str[i] != str[length - i - 1]) {
                    palindrome = 0;
                    break;
                }
            }

            if(palindrome)
                printf("String is a Palindrome.\n");
            else
                printf("String is not a Palindrome.\n");

            break;
        }

        // 86. Count Words in a Sentence
        case 86: {
            char str[200];
            int i, words = 0;

            printf("Enter a sentence: ");
            scanf(" %[^\n]", str);

            for(i = 0; str[i] != '\0'; i++) {
                if((i == 0 && str[i] != ' ') ||
                   (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0'))
                    words++;
            }

            printf("Number of words = %d\n", words);
            break;
        }

        // 87. Character Frequency
        case 87: {
            char str[100], ch;
            int i, count = 0;

            printf("Enter a string: ");
            scanf(" %[^\n]", str);

            printf("Enter character to find frequency: ");
            scanf(" %c", &ch);

            for(i = 0; str[i] != '\0'; i++) {
                if(str[i] == ch)
                    count++;
            }

            printf("Frequency of '%c' = %d\n", ch, count);
            break;
        }

        // 88. Remove Spaces from String
        case 88: {
            char str[100];
            int i, j = 0;

            printf("Enter a string: ");
            scanf(" %[^\n]", str);

            for(i = 0; str[i] != '\0'; i++) {
                if(str[i] != ' ') {
                    str[j] = str[i];
                    j++;
                }
            }

            str[j] = '\0';

            printf("String after removing spaces: %s\n", str);
            break;
        }

        default:
            printf("Invalid choice! Please select between 85 and 88.\n");
    }

    return 0;
}