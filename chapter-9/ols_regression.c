//
// Created by Jodie Burchell on 27.01.26.
//
// We have a linear regression model with one feature.

#include <stdio.h>

#define N_ROWS 3
#define N_COLS 2

void transpose_matrix(int m, int n, float original_matrix[m][n], float transposed_matrix[n][m]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transposed_matrix[j][i] = original_matrix[i][j];
        }
    }
}

void multiply_matrices(int m, int n, int p, float matrix_1[m][n], float matrix_2[n][p], float output_matrix[m][p]) {
    float dot_product;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            dot_product = 0.0f;
            for (int k = 0; k < n; k++) {
                dot_product += matrix_1[i][k] * matrix_2[k][j];
            }
            output_matrix[i][j] = dot_product;
        }
    }
}

int main(void) {
    float X[N_ROWS][N_COLS] = {{1, 1,}, {1, 2}, {1, 3}}, y[N_ROWS][1] = {3, 6, 7};
    float X_T[N_COLS][N_ROWS], X_T_X[N_COLS][N_COLS], X_T_y[N_COLS][1], y_hat[N_ROWS][1];
    float u_11, u_12, l_21, u_22, z_0, z_1, b_0, b_1;

    // Transpose the matrix
    transpose_matrix(N_ROWS, N_COLS, X, X_T);

    // Multiply the matrices to get X_T_X
    multiply_matrices(N_COLS, N_ROWS, N_COLS, X_T, X, X_T_X);

    // Multiply the matrices to get X_T_y
    multiply_matrices(N_COLS, N_ROWS, 1, X_T, y, X_T_y);

    // LU decomposition
    u_11 = X_T_X[0][0];
    u_12 = X_T_X[0][1];
    if (u_11 == 0.0f) {
        printf("Error: division by zero error (cannot solve)");
        return 1;
    }
    else {
        l_21 = X_T_X[1][0] / u_11;
    }
    u_22 = X_T_X[1][1] - (l_21 * u_12);

    float L[N_COLS][N_COLS] = {{1, 0}, {l_21, 1}}, U[N_COLS][N_COLS] = {{u_11, u_12},{0, u_22}};

    // Solve Lz = y
    z_0 = X_T_y[0][0];
    z_1 = X_T_y[1][0] - L[1][0] * z_0;
    float z[N_COLS][1] = {z_0, z_1};

    // Solve Ub = z
    b_1 = z[1][0] / U[1][1];
    b_0 = (z[0][0] - (U[0][1] * b_1)) / U[0][0];
    float b[N_COLS][1] = {b_0, b_1};

    // Calculate y_hat:
    multiply_matrices(N_ROWS, N_COLS, 1, X, b, y_hat);

    for (int i = 0; i < N_ROWS; i++) {
        printf("%f \n", y_hat[i][0]);
    }

    return 0;
}
