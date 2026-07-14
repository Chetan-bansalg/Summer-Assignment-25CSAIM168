            #include <stdio.h>

// Function to find sum
int sum(int a, int b) {
    return a + b;
}

// Function to find maximum
int maximum(int a, int b) {
    return (a > b) ? a : b;
}

// Function to check prime
int isPrime(int n) {
    if(n <= 1)
        return 0;

    for(int i = 2; i <= n / 2; i++) {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

// Function to find factorial
int factorial(int n) {
    int fact = 1;

    for(int i = 1; i <= n; i++)
        fact *= i;

    return fact;
}

int main() {
    int choice, a, b, n;

    printf("Choose a program to run:\n");
    printf("41. Find sum of two numbers\n");
    printf("42. Find maximum of two numbers\n");
    printf("43. Check Prime Number\n");
    printf("44. Find Factorial\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 41:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);

            printf("Sum = %d\n", sum(a, b));
            break;

        case 42:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);

            printf("Maximum = %d\n", maximum(a, b));
            break;

        case 43:
            printf("Enter a number: ");
            scanf("%d", &n);

            if(isPrime(n))
                printf("%d is a Prime Number.\n", n);
            else
                printf("%d is not a Prime Number.\n", n);

            break;

        case 44:
            printf("Enter a number: ");
            scanf("%d", &n);

            printf("Factorial = %d\n", factorial(n));
            break;

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}