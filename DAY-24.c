
#include <stdio.h>

int main() {
    int choice;

    printf("Choose a program to run:\n");
    printf("93. Check String Rotation\n");
    printf("94. Compress a String\n");
    printf("95. Find Longest Word\n");
    printf("96. Remove Duplicate Characters\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        // 93. Check String Rotation
        case 93: {
            char str1[100], str2[100], temp[200];
            int i, j, len1 = 0, len2 = 0, found = 0;

            printf("Enter first string: ");
            scanf(" %[^\n]", str1);

            printf("Enter second string: ");
            scanf(" %[^\n]", str2);

            while(str1[len1] != '\0')
                len1++;

            while(str2[len2] != '\0')
                len2++;

            if(len1 != len2) {
                printf("Strings are not rotations.\n");
                break;
            }

            // Concatenate str1 with itself
            for(i = 0; i < len1; i++)
                temp[i] = str1[i];

            for(i = 0; i < len1; i++)
                temp[len1 + i] = str1[i];

            temp[2 * len1] = '\0';

            // Check if str2 exists in temp
            for(i = 0; temp[i] != '\0'; i++) {
                for(j = 0; str2[j] != '\0'; j++) {
                    if(temp[i + j] != str2[j])
                        break;
                }

                if(str2[j] == '\0') {
                    found = 1;
                    break;
                }
            }

            if(found)
                printf("Strings are rotations of each other.\n");
            else
                printf("Strings are not rotations of each other.\n");

            break;
        }

        // 94. Compress a String
        case 94: {
            char str[100];
            int i, count;

            printf("Enter a string: ");
            scanf(" %[^\n]", str);

            printf("Compressed string: ");

            for(i = 0; str[i] != '\0'; i++) {
                count = 1;

                while(str[i] == str[i + 1]) {
                    count++;
                    i++;
                }

                printf("%c%d", str[i], count);
            }

            printf("\n");
            break;
        }

        // 95. Find Longest Word
        case 95: {
            char str[200], longest[100], current[100];
            int i = 0, j = 0, maxLen = 0, currentLen = 0, k;

            printf("Enter a sentence: ");
            scanf(" %[^\n]", str);

            while(1) {
                if(str[i] != ' ' && str[i] != '\0') {
                    current[j++] = str[i];
                    currentLen++;
                } else {
                    current[j] = '\0';

                    if(currentLen > maxLen) {
                        maxLen = currentLen;

                        for(k = 0; k <= currentLen; k++)
                            longest[k] = current[k];
                    }

                    currentLen = 0;
                    j = 0;
                }

                if(str[i] == '\0')
                    break;

                i++;
            }

            printf("Longest word: %s\n", longest);
            printf("Length: %d\n", maxLen);

            break;
        }

        // 96. Remove Duplicate Characters
        case 96: {
            char str[100];
            int i, j, k;

            printf("Enter a string: ");
            scanf(" %[^\n]", str);

            for(i = 0; str[i] != '\0'; i++) {
                for(j = i + 1; str[j] != '\0'; ) {
                    if(str[i] == str[j]) {
                        for(k = j; str[k] != '\0'; k++)
                            str[k] = str[k + 1];
                    } else {
                        j++;
                    }
                }
            }

            printf("String after removing duplicate characters: %s\n", str);
            break;
        }

        default:
            printf("Invalid choice! Please select between 93 and 96.\n");
    }

    return 0;
}

