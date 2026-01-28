//
// Created by Jodie Burchell on 27.01.26.
//
// We have a linear regression model with one feature.

#include <stdio.h>

# define N_COLS 2

int main(void) {
    int N_ROWS;

    printf("Number of observations: ");
    scanf("%d", &N_ROWS);

    float X[N_ROWS][N_COLS], y[N_ROWS], X_T[N_COLS][N_ROWS], X_T_X[N_COLS][N_COLS], X_T_y[N_COLS], y_hat[N_ROWS];
    float u_11, u_12, l_21, u_22, z_0, z_1, b_0, b_1, sum;

    printf("Enter the feature values: ");
    for (int i = 0; i < N_ROWS; i++) {
        scanf("%f", &X[i][1]);
        X[i][0] = 1.0f;
    }

    printf("Enter the target values: ");
    for (int i = 0; i < N_ROWS; i++) {
        scanf("%f", &y[i]);
    }

    // Transpose the matrix
    for (int i = 0; i < N_ROWS; i++) {
        for (int j = 0; j < N_COLS; j++) {
            X_T[j][i] = X[i][j];
        }
    }

    // Multiply the matrices to get X_T_X
    for (int i = 0; i < N_COLS; i++) {
        for (int j = 0; j < N_COLS; j++) {
            sum = 0.0f;
            for (int k = 0; k < N_ROWS; k++) {
                sum += X_T[i][k] * X[k][j];
            }
            X_T_X[i][j] = sum;
        }
    }

    // Multiply the matrices to get X_T_y
    for (int i = 0; i < N_COLS; i++) {
        for (int j = 0; j < 1; j++) {
            sum = 0.0f;
            for (int k = 0; k < N_ROWS; k++) {
                sum += X_T[i][k] * y[k];
            }
            X_T_y[i] = sum;
        }
    }

    // LU decomposition
    u_11 = X_T_X[0][0];
    u_12 = X_T_X[0][1];
    l_21 = X_T_X[1][0] / u_11;
    u_22 = X_T_X[1][1] - (l_21 * u_12);

    float L[N_COLS][N_COLS] = {{1, 0}, {l_21, 1}}, U[N_COLS][N_COLS] = {{u_11, u_12},{0, u_22}};

    // Solve Lz = y
    z_0 = X_T_y[0];
    z_1 = X_T_y[1] - L[1][0] * z_0;
    float z[N_COLS] = {z_0, z_1};

    // Solve Ub = z
    b_1 = z[1] / U[1][1];
    b_0 = (z[0] - (U[0][1] * b_1)) / U[0][0];
    float b[N_COLS] = {b_0, b_1};

    // Calculate y_hat:
    for (int i = 0; i < N_ROWS; i++) {
        for (int j = 0; j < 1; j++) {
            sum = 0.0f;
            for (int k = 0; k < N_COLS; k++) {
                sum += X[i][k] * b[k];
            }
            y_hat[i] = sum;
        }
    }

    // for (int i = 0; i < N_COLS; i++) {
    //     printf("%f %f\n", U[i][0], U[i][1]);
    // }

    for (int i = 0; i < N_ROWS; i++) {
        printf("%f \n", y_hat[i]);
    }

    // for (int j = 0; j < N_COLS; j++) {
    //     for (int i = 0; i < N_ROWS; i++) {
    //         printf("%f ", X_T[j][i]);
    //     }
    //     printf("\n");
    // }



    // for (int i = 0; i < N_ROWS; i++) {
    //     printf("%f %f\n", X[i][0], X[i][1]);
    // }
    //
    // for (int i = 0; i < n; i++) {
    //     printf("%f\n", y[i]);
    // }

    return 0;
}
