
/*Q9. Write a program to Check whether a number is prime.

#include <stdio.h>

int main() {
    int n, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
        isPrime = 0;
    else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a Prime Number", n);
    else
        printf("%d is not a Prime Number", n);

    return 0;
}



//Q10. Write a program to Print prime numbers in a range.

#include <stdio.h>

int main() {
    int start, end, i, j, isPrime;

    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers are:\n");

    for (i = start; i <= end; i++) {
        if (i < 2)
            continue;

        isPrime = 1;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            printf("%d ", i);
    }

    return 0;
}




//Q11. Write a program to Find GCD of two numbers.

#include <stdio.h>

int main() {
    int a, b, gcd = 1, i;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }

    printf("GCD = %d", gcd);

    return 0;
}



//Q12. Write a program to Find LCM of two numbers.

#include <stdio.h>

int main() {
    int a, b, max, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;

    while (1) {
        if (max % a == 0 && max % b == 0) {
            lcm = max;
            break;
        }
        max++;
    }

    printf("LCM = %d", lcm);

    return 0;
}
*/