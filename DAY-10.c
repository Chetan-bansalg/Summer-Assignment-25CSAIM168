// Q37: Write a program to Print star pyramid.
//     *
//    ***
//   *****
//  *******
// *********

#include <stdio.h>

int main() {
    int i, j;

    printf("Q37: Star Pyramid\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5 - i; j++)
            printf(" ");
        for(j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    printf("\n");

    // Q38: Write a program to Print reverse pyramid.
    // *********
    //  *******
    //   *****
    //    ***
    //     *

    printf("Q38: Reverse Star Pyramid\n");
    for(i = 5; i >= 1; i--) {
        for(j = 1; j <= 5 - i; j++)
            printf(" ");
        for(j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    printf("\n");

    // Q39: Write a program to Print number pyramid.
    //     1
    //    121
    //   12321
    //  1234321
    // 123454321

    printf("Q39: Number Pyramid\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5 - i; j++)
            printf(" ");

        for(j = 1; j <= i; j++)
            printf("%d", j);

        for(j = i - 1; j >= 1; j--)
            printf("%d", j);

        printf("\n");
    }

    printf("\n");

    // Q40: Write a program to Print character pyramid.
    //     A
    //    ABA
    //   ABCBA
    //  ABCDCBA
    // ABCDEDCBA

    printf("Q40: Character Pyramid\n");
    int k;
    char ch;

    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5 - i; j++)
            printf(" ");

        ch = 'A';
        for(k = 1; k <= i; k++) {
            printf("%c", ch);
            ch++;
        }

        ch -= 2;
        for(k = 1; k < i; k++) {
            printf("%c", ch);
            ch--;
        }

        printf("\n");
    }

    return 0;
}