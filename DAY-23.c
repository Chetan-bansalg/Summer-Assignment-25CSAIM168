#include <stdio.h>

int main() {
    int choice;

    printf("Choose a program to run:\n");
    printf("89. Find First Non-Repeating Character\n");
    printf("90. Find First Repeating Character\n");
    printf("91. Check Anagram Strings\n");
    printf("92. Find Maximum Occurring Character\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        // 89. Find First Non-Repeating Character
        case 89: {
            char str[100];
            int i, j, found;

            printf("Enter a string: ");
            scanf(" %[^\n]", str);

            for(i = 0; str[i] != '\0'; i++) {
                found = 0;

                for(j = 0; str[j] != '\0'; j++) {
                    if(i != j && str[i] == str[j]) {
                        found = 1;
                        break;
                    }
                }

                if(!found) {
                    printf("First non-repeating character = %c\n", str[i]);
                    break;
                }
            }

            if(str[i] == '\0')
                printf("No non-repeating character found.\n");

            break;
        }

        // 90. Find First Repeating Character
        case 90: {
            char str[100];
            int i, j, found = 0;

            printf("Enter a string: ");
            scanf(" %[^\n]", str);

            for(i = 0; str[i] != '\0'; i++) {
                for(j = i + 1; str[j] != '\0'; j++) {
                    if(str[i] == str[j]) {
                        printf("First repeating character = %c\n", str[i]);
                        found = 1;
                        break;
                    }
                }
                if(found)
                    break;
            }

            if(!found)
                printf("No repeating character found.\n");

            break;
        }

        // 91. Check Anagram Strings
        case 91: {
            char str1[100], str2[100];
            int freq1[256] = {0}, freq2[256] = {0};
            int i, anagram = 1;

            printf("Enter first string: ");
            scanf(" %[^\n]", str1);

            printf("Enter second string: ");
            scanf(" %[^\n]", str2);

            for(i = 0; str1[i] != '\0'; i++)
                freq1[(int)str1[i]]++;

            for(i = 0; str2[i] != '\0'; i++)
                freq2[(int)str2[i]]++;

            for(i = 0; i < 256; i++) {
                if(freq1[i] != freq2[i]) {
                    anagram = 0;
                    break;
                }
            }

            if(anagram)
                printf("Strings are Anagrams.\n");
            else
                printf("Strings are not Anagrams.\n");

            break;
        }

        // 92. Find Maximum Occurring Character
        case 92: {
            char str[100], maxChar;
            int i, j, count, maxCount = 0;

            printf("Enter a string: ");
            scanf(" %[^\n]", str);

            for(i = 0; str[i] != '\0'; i++) {
                count = 1;

                for(j = i + 1; str[j] != '\0'; j++) {
                    if(str[i] == str[j])
                        count++;
                }

                if(count > maxCount) {
                    maxCount = count;
                    maxChar = str[i];
                }
            }

            printf("Maximum occurring character = %c\n", maxChar);
            printf("Frequency = %d\n", maxCount);

            break;
        }

        default:
            printf("Invalid choice! Please select between 89 and 92.\n");
    }

    return 0;
}