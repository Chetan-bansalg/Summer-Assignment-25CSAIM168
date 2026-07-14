//Q33: Write a program to Print reverse star pattern.
// *****
// ****
// ***
// **
// *

#include <stdio.h>

int main() {
    int i, j;

    printf("Q33: Reverse Star Pattern\n");
    for(i = 5; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    // Q34: Write a program to Print reverse number triangle.
    // 12345
    // 1234
    // 123
    // 12
    // 1

    printf("Q34: Reverse Number Triangle\n");
    for(i = 5; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");

    // Q35: Write a program to Print repeated character pattern.
    // A
    // BB
    // CCC
    // DDDD
    // EEEEE

    printf("Q35: Repeated Character Pattern\n");
    char ch = 'A';
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("%c", ch);
        }
        ch++;
        printf("\n");
    }

    printf("\n");

    // Q36: Write a program to Print hollow square pattern.
    // *****
    // *   *
    // *   *
    // *   *
    // *****

    printf("Q36: Hollow Square Pattern\n");
    int size = 5;

    for(i = 1; i <= size; i++) {
        for(j = 1; j <= size; j++) {
            if(i == 1 || i == size || j == 1 || j == size)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}