#include <stdio.h>
#include <math.h>

// Function to check palindrome
int isPalindrome(int n) {
    int original = n, reverse = 0, rem;

    while(n != 0) {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n /= 10;
    }

    return original == reverse;
}

// Function to check Armstrong number
int isArmstrong(int n) {
    int original = n, sum = 0, rem, digits = 0;

    int temp = n;
    while(temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while(temp != 0) {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    return original == sum;
}

// Function to generate Fibonacci series
void fibonacci(int n) {
    int a = 0, b = 1, next;

    printf("Fibonacci Series: ");
    for(int i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

// Function to check perfect number
int isPerfect(int n) {
    int sum = 0;

    for(int i = 1; i <= n / 2; i++) {
        if(n % i == 0)
            sum += i;
    }

    return sum == n;
}

int main() {
    int choice, n;

    printf("Choose a program to run:\n");
    printf("45. Check Palindrome Number\n");
    printf("46. Check Armstrong Number\n");
    printf("47. Generate Fibonacci Series\n");
    printf("48. Check Perfect Number\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 45:
            printf("Enter a number: ");
            scanf("%d", &n);

            if(isPalindrome(n))
                printf("%d is a Palindrome Number.\n", n);
            else
                printf("%d is not a Palindrome Number.\n", n);
            break;

        case 46:
            printf("Enter a number: ");
            scanf("%d", &n);

            if(isArmstrong(n))
                printf("%d is an Armstrong Number.\n", n);
            else
                printf("%d is not an Armstrong Number.\n", n);
            break;

        case 47:
            printf("Enter number of terms: ");
            scanf("%d", &n);

            fibonacci(n);
            break;

        case 48:
            printf("Enter a number: ");
            scanf("%d", &n);

            if(isPerfect(n))
                printf("%d is a Perfect Number.\n", n);
            else
                printf("%d is not a Perfect Number.\n", n);
            break;

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}