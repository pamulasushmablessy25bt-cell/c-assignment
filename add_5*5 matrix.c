#include <stdio.h>

int main() {
    int a[5][5], b[5][5], sum[5][5];
    int i, j;

    // Input first matrix
    printf("Enter elements of first 5x5 matrix:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second 5x5 matrix:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Addition of matrices
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Display result
    printf("\nSum of the matrices:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
output:
Enter elements of first 5x5 matrix:
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25

Enter elements of second 5x5 matrix:
5 4 3 2 1
10 9 8 7 6
15 14 13 12 11
20 19 18 17 16
25 24 23 22 21

Sum of the matrices:
6	6	6	6	6
16	16	16	16	16
26	26	26	26	26
36	36	36	36	36
46	46	46	46	46
