#include <stdio.h>

int main() {
    int choice;

    printf("Choose a program to run:\n");
    printf("77. Multiply Matrices\n");
    printf("78. Check Symmetric Matrix\n");
    printf("79. Find Row-wise Sum\n");
    printf("80. Find Column-wise Sum\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        // 77. Multiply Matrices
        case 77: {
            int r1, c1, r2, c2, i, j, k;

            printf("Enter rows and columns of first matrix: ");
            scanf("%d %d", &r1, &c1);

            printf("Enter rows and columns of second matrix: ");
            scanf("%d %d", &r2, &c2);

            if(c1 != r2) {
                printf("Matrix multiplication is not possible.\n");
                break;
            }

            int a[r1][c1], b[r2][c2], result[r1][c2];

            printf("Enter first matrix:\n");
            for(i = 0; i < r1; i++)
                for(j = 0; j < c1; j++)
                    scanf("%d", &a[i][j]);

            printf("Enter second matrix:\n");
            for(i = 0; i < r2; i++)
                for(j = 0; j < c2; j++)
                    scanf("%d", &b[i][j]);

            for(i = 0; i < r1; i++) {
                for(j = 0; j < c2; j++) {
                    result[i][j] = 0;
                    for(k = 0; k < c1; k++)
                        result[i][j] += a[i][k] * b[k][j];
                }
            }

            printf("Resultant Matrix:\n");
            for(i = 0; i < r1; i++) {
                for(j = 0; j < c2; j++)
                    printf("%d ", result[i][j]);
                printf("\n");
            }

            break;
        }

        // 78. Check Symmetric Matrix
        case 78: {
            int n, i, j, symmetric = 1;

            printf("Enter size of square matrix: ");
            scanf("%d", &n);

            int a[n][n];

            printf("Enter matrix elements:\n");
            for(i = 0; i < n; i++)
                for(j = 0; j < n; j++)
                    scanf("%d", &a[i][j]);

            for(i = 0; i < n; i++) {
                for(j = 0; j < n; j++) {
                    if(a[i][j] != a[j][i]) {
                        symmetric = 0;
                        break;
                    }
                }
            }

            if(symmetric)
                printf("Matrix is Symmetric.\n");
            else
                printf("Matrix is not Symmetric.\n");

            break;
        }

        // 79. Find Row-wise Sum
        case 79: {
            int r, c, i, j, sum;

            printf("Enter rows and columns of matrix: ");
            scanf("%d %d", &r, &c);

            int a[r][c];

            printf("Enter matrix elements:\n");
            for(i = 0; i < r; i++)
                for(j = 0; j < c; j++)
                    scanf("%d", &a[i][j]);

            for(i = 0; i < r; i++) {
                sum = 0;
                for(j = 0; j < c; j++)
                    sum += a[i][j];

                printf("Sum of Row %d = %d\n", i + 1, sum);
            }

            break;
        }

        // 80. Find Column-wise Sum
        case 80: {
            int r, c, i, j, sum;

            printf("Enter rows and columns of matrix: ");
            scanf("%d %d", &r, &c);

            int a[r][c];

            printf("Enter matrix elements:\n");
            for(i = 0; i < r; i++)
                for(j = 0; j < c; j++)
                    scanf("%d", &a[i][j]);

            for(j = 0; j < c; j++) {
                sum = 0;
                for(i = 0; i < r; i++)
                    sum += a[i][j];

                printf("Sum of Column %d = %d\n", j + 1, sum);
            }

            break;
        }

        default:
            printf("Invalid choice! Please select between 77 and 80.\n");
    }

    return 0;
}