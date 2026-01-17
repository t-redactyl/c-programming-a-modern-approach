//
// Created by Jodie Burchell on 17.01.26.
//
#include <stdio.h>

int main() {
    int matrix[5][5], n1, n2, n3, n4, n5, sum;

    for (int i = 0; i < 5; i++) {
        printf("Enter row %d: ", i + 1);
        scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

        matrix[i][0] = n1;
        matrix[i][1] = n2;
        matrix[i][2] = n3;
        matrix[i][3] = n4;
        matrix[i][4] = n5;
    }

    printf("Row totals:");
    for (int i = 0; i < 5; i++) {
        sum = 0;
        for (int j = 0; j < 5; j++) {
            sum += matrix[i][j];
        }
        printf(" %d", sum);
    }

    printf("\nColumn totals:");
    for (int i = 0; i < 5; i++) {
        sum = 0;
        for (int j = 0; j < 5; j++) {
            sum += matrix[j][i];
        }
        printf(" %d", sum);
    }

    return 0;
}