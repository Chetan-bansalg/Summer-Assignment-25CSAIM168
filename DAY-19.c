#include <stdio.h>

int main() {
    int choice;

    printf("Choose a program to run:\n");
    printf("73. Add Matrices\n");
    printf("74. Subtract Matrices\n");
    printf("75. Transpose Matrix\n");
    printf("76. Find Diagonal Sum\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        // 73. Add Matrices
        case 73: {
            int r, c, i, j;

            printf("Enter rows and columns: ");
            scanf("%d %d", &r, &c);

            int a[r][c], b[r][c], sum[r][c];

            printf("Enter first matrix:\n");
            for(i = 0; i < r; i++)
                for(j = 0; j < c; j++)
                    scanf("%d", &a[i][j]);

            printf("Enter second matrix:\n");
            for(i = 0; i < r; i++)
                for(j = 0; j < c; j++)
                    scanf("%d", &b[i][j]);

            for(i = 0; i < r; i++)
                for(j = 0; j < c; j++)
                    sum[i][j] = a[i][j] + b[i][j];

            printf("Resultant Matrix:\n");
            for(i = 0; i < r; i++) {
                for(j = 0; j < c; j++)
                    printf("%d ", sum[i][j]);
                printf("\n");
            }
            break;
        }

        // 74. Subtract Matrices
        case 74: {
            int r, c, i, j;

            printf("Enter rows and columns: ");
            scanf("%d %d", &r, &c);

            int a[r][c], b[r][c], diff[r][c];

            printf("Enter first matrix:\n");
            for(i = 0; i < r; i++)
                for(j = 0; j < c; j++)
                    scanf("%d", &a[i][j]);

            printf("Enter second matrix:\n");
            for(i = 0; i < r; i++)
                for(j = 0; j < c; j++)
                    scanf("%d", &b[i][j]);

            for(i = 0; i < r; i++)
                for(j = 0; j < c; j++)
                    diff[i][j] = a[i][j] - b[i][j];

            printf("Resultant Matrix:\n");
            for(i = 0; i < r; i++) {
                for(j = 0; j < c; j++)
                    printf("%d ", diff[i][j]);
                printf("\n");
            }
            break;
        }

        // 75. Transpose Matrix
        case 75: {
            int r, c, i, j;

            printf("Enter rows and columns: ");
            scanf("%d %d", &r, &c);

            int a[r][c];

            printf("Enter matrix elements:\n");
            for(i = 0; i < r; i++)
                for(j = 0; j < c; j++)
                    scanf("%d", &a[i][j]);

            printf("Transpose Matrix:\n");
            for(i = 0; i < c; i++) {
                for(j = 0; j < r; j++)
                    printf("%d ", a[j][i]);
                printf("\n");
            }
            break;
        }

        // 76. Find Diagonal Sum
        case 76: {
            int n, i, j, sum = 0;

            printf("Enter size of square matrix: ");
            scanf("%d", &n);

            int a[n][n];

            printf("Enter matrix elements:\n");
            for(i = 0; i < n; i++)
                for(j = 0; j < n; j++)
                    scanf("%d", &a[i][j]);

            for(i = 0; i < n; i++)
                sum += a[i][i];

            printf("Sum of principal diagonal elements = %d\n", sum);
            break;
        }

        default:
            printf("Invalid choice! Please select between 73 and 76.\n");
    }

    return 0;
}