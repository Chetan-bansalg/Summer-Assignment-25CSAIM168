/*
=========================================================
Day 8

Q29. Print Half Pyramid Pattern
Company: TCS, Infosys, Wipro

Q30. Print Number Triangle
1
12
123
1234
12345
Company: TCS, Infosys, Wipro

Q31. Print Character Triangle
A
AB
ABC
ABCD
ABCDE
Company: Microsoft, Adobe, Paytm

Q32. Print Repeated Number Pattern
1
22
333
4444
55555
Company: TCS, Infosys, Wipro
=========================================================
*/

#include <stdio.h>

int main()
{
    int choice, rows;

    printf("\n===== MENU =====\n");
    printf("29. Half Pyramid Pattern\n");
    printf("30. Number Triangle\n");
    printf("31. Character Triangle\n");
    printf("32. Repeated Number Pattern\n");
    printf("Enter Question Number (29-32): ");
    scanf("%d", &choice);

    printf("Enter Number of Rows: ");
    scanf("%d", &rows);

    switch(choice)
    {
        // Q29 Half Pyramid
        case 29:
        {
            for(int i = 1; i <= rows; i++)
            {
                for(int j = 1; j <= i; j++)
                    printf("* ");

                printf("\n");
            }
            break;
        }

        // Q30 Number Triangle
        case 30:
        {
            for(int i = 1; i <= rows; i++)
            {
                for(int j = 1; j <= i; j++)
                    printf("%d", j);

                printf("\n");
            }
            break;
        }

        // Q31 Character Triangle
        case 31:
        {
            for(int i = 1; i <= rows; i++)
            {
                for(char ch = 'A'; ch < 'A' + i; ch++)
                    printf("%c", ch);

                printf("\n");
            }
            break;
        }

        // Q32 Repeated Number Pattern
        case 32:
        {
            for(int i = 1; i <= rows; i++)
            {
                for(int j = 1; j <= i; j++)
                    printf("%d", i);

                printf("\n");
            }
            break;
        }

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}