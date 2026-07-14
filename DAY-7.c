/*
=========================================================
Day 7

Q25. Recursive Factorial
Company: TCS, Infosys, Wipro

Q26. Recursive Fibonacci
Company: TCS, Infosys, Wipro

Q27. Recursive Sum of Digits
Company: TCS, Infosys, Wipro

Q28. Recursive Reverse Number
Company: TCS, Infosys, Wipro
=========================================================
*/

#include <stdio.h>

// Q25 Recursive Factorial
long long factorial(int n)
{
    if(n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

// Q26 Recursive Fibonacci
int fibonacci(int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Q27 Recursive Sum of Digits
int sumDigits(int n)
{
    if(n == 0)
        return 0;
    return (n % 10) + sumDigits(n / 10);
}

// Q28 Recursive Reverse Number
int reverseNum = 0;

int reverse(int n)
{
    if(n == 0)
        return reverseNum;

    reverseNum = reverseNum * 10 + (n % 10);
    return reverse(n / 10);
}

int main()
{
    int choice;

    printf("\n===== MENU =====\n");
    printf("25. Recursive Factorial\n");
    printf("26. Recursive Fibonacci\n");
    printf("27. Recursive Sum of Digits\n");
    printf("28. Recursive Reverse Number\n");
    printf("Enter Question Number (25-28): ");
    scanf("%d", &choice);

    switch(choice)
    {
        // Q25
        case 25:
        {
            int n;
            printf("Enter Number: ");
            scanf("%d", &n);

            printf("Factorial = %lld\n", factorial(n));
            break;
        }

        // Q26
        case 26:
        {
            int n;
            printf("Enter Number of Terms: ");
            scanf("%d", &n);

            printf("Fibonacci Series: ");
            for(int i = 0; i < n; i++)
                printf("%d ", fibonacci(i));

            printf("\n");
            break;
        }

        // Q27
        case 27:
        {
            int n;
            printf("Enter Number: ");
            scanf("%d", &n);

            printf("Sum of Digits = %d\n", sumDigits(n));
            break;
        }

        // Q28
        case 28:
        {
            int n;
            printf("Enter Number: ");
            scanf("%d", &n);

            reverseNum = 0;
            printf("Reversed Number = %d\n", reverse(n));
            break;
        }

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}