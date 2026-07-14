#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int choice;

    printf("Choose a program to run:\n");
    printf("101. Create Number Guessing Game\n");
    printf("102. Create Voting Eligibility System\n");
    printf("103. Create ATM Simulation\n");
    printf("104. Create Quiz Application\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        // 101. Number Guessing Game
        case 101: {
            int number, guess, attempts = 0;

            srand(time(0));
            number = rand() % 100 + 1;

            printf("Guess the number between 1 and 100.\n");

            do {
                printf("Enter your guess: ");
                scanf("%d", &guess);
                attempts++;

                if(guess > number)
                    printf("Too High!\n");
                else if(guess < number)
                    printf("Too Low!\n");
                else
                    printf("Congratulations! You guessed the number in %d attempts.\n", attempts);

            } while(guess != number);

            break;
        }

        // 102. Voting Eligibility System
        case 102: {
            int age;

            printf("Enter your age: ");
            scanf("%d", &age);

            if(age >= 18)
                printf("You are eligible to vote.\n");
            else
                printf("You are not eligible to vote.\n");

            break;
        }

        // 103. ATM Simulation
        case 103: {
            int option;
            float balance = 10000, amount;

            do {
                printf("\n===== ATM MENU =====\n");
                printf("1. Check Balance\n");
                printf("2. Deposit Money\n");
                printf("3. Withdraw Money\n");
                printf("4. Exit\n");

                printf("Enter your choice: ");
                scanf("%d", &option);

                switch(option) {
                    case 1:
                        printf("Current Balance: %.2f\n", balance);
                        break;

                    case 2:
                        printf("Enter amount to deposit: ");
                        scanf("%f", &amount);
                        balance += amount;
                        printf("Deposit Successful.\n");
                        break;

                    case 3:
                        printf("Enter amount to withdraw: ");
                        scanf("%f", &amount);

                        if(amount <= balance) {
                            balance -= amount;
                            printf("Withdrawal Successful.\n");
                        } else {
                            printf("Insufficient Balance.\n");
                        }
                        break;

                    case 4:
                        printf("Thank you for using ATM.\n");
                        break;

                    default:
                        printf("Invalid Choice.\n");
                }

            } while(option != 4);

            break;
        }

        // 104. Quiz Application
        case 104: {
            int answer, score = 0;

            printf("\nQuestion 1: What is the capital of India?\n");
            printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
            printf("Enter answer: ");
            scanf("%d", &answer);

            if(answer == 2)
                score++;

            printf("\nQuestion 2: Which language is used for C programming?\n");
            printf("1. Compiler\n2. Interpreter\n3. Programming Language\n4. Database\n");
            printf("Enter answer: ");
            scanf("%d", &answer);

            if(answer == 3)
                score++;

            printf("\nQuestion 3: How many bytes are there in an int (typically)?\n");
            printf("1. 2\n2. 4\n3. 8\n4. 16\n");
            printf("Enter answer: ");
            scanf("%d", &answer);

            if(answer == 2)
                score++;

            printf("\nYour Score = %d/3\n", score);

            if(score == 3)
                printf("Excellent!\n");
            else if(score == 2)
                printf("Good Job!\n");
            else
                printf("Keep Practicing!\n");

            break;
        }

        default:
            printf("Invalid choice! Please select between 101 and 104.\n");
    }

    return 0;
}