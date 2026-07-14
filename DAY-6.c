/*
=========================================================
Q17. Check Perfect Number
Company: TCS, Infosys, Wipro

Q18. Check Strong Number
Company: TCS, Infosys, Wipro

Q19. Print Factors of a Number
Company: TCS, Infosys, Wipro

Q20. Find Largest Prime Factor
Company: TCS, Infosys, Wipro
=========================================================
*/

#include <stdio.h>

// Function to calculate factorial
int factorial(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

// Function to check prime number
int isPrime(int n)
{
    if(n < 2)
        return 0;

    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int choice, num;

    printf("\n===== MENU =====\n");
    printf("17. Check Perfect Number\n");
    printf("18. Check Strong Number\n");
    printf("19. Print Factors of a Number\n");
    printf("20. Find Largest Prime Factor\n");
    printf("Enter Question Number (17-20): ");
    scanf("%d", &choice);

    printf("Enter a number: ");
    scanf("%d", &num);

    switch(choice)
    {
        // Q17 Perfect Number
        case 17:
        {
            int sum = 0;

            for(int i = 1; i < num; i++)
            {
                if(num % i == 0)
                    sum += i;
            }

            if(sum == num)
                printf("%d is a Perfect Number.\n", num);
            else
                printf("%d is NOT a Perfect Number.\n", num);

            break;
        }

        // Q18 Strong Number
        case 18:
        {
            int temp = num, sum = 0;

            while(temp > 0)
            {
                int digit = temp % 10;
                sum += factorial(digit);
                temp /= 10;
            }

            if(sum == num)
                printf("%d is a Strong Number.\n", num);
            else
                printf("%d is NOT a Strong Number.\n", num);

            break;
        }

        // Q19 Factors of a Number
        case 19:
        {
            printf("Factors of %d are: ", num);

            for(int i = 1; i <= num; i++)
            {
                if(num % i == 0)
                    printf("%d ", i);
            }

            printf("\n");
            break;
        }

        // Q20 Largest Prime Factor
        case 20:
        {
            int largestPrimeFactor = -1;

            for(int i = 2; i <= num; i++)
            {
                if(num % i == 0 && isPrime(i))
                    largestPrimeFactor = i;
            }

            if(largestPrimeFactor != -1)
                printf("Largest Prime Factor = %d\n", largestPrimeFactor);
            else
                printf("No Prime Factor Found.\n");

            break;
        }

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}