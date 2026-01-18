//
// Created by Jodie Burchell on 17.01.26.
//
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    char matrix[10][10],
            letters[25] = {
                'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
                'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'
            };
    int direction, current_row_position = 0, new_row_position = 0, current_column_position = 0, new_column_position = 0;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matrix[i][j] = '.';
        }
    }

    srand((unsigned) time(NULL));

    matrix[current_row_position][current_column_position] = 'A';

    for (int i = 0; i < 25; i++) {
        if (matrix[current_row_position - 1][current_column_position] != '.' &&
            matrix[current_row_position + 1][current_column_position] != '.' &&
            matrix[current_row_position][current_column_position - 1] != '.' &&
            matrix[current_row_position][current_column_position + 1] != '.') {
            break;
        }

        while (1) {
            direction = rand() % 4;

            new_row_position = current_row_position;
            new_column_position = current_column_position;

            if (direction == 0)
                new_column_position -= 1;
            else if (direction == 1)
                new_column_position += 1;
            else if (direction == 2)
                new_row_position -= 1;
            else if (direction == 3)
                new_row_position += 1;

            if (new_row_position >= 0 && new_row_position < 10 && new_column_position >= 0 && new_column_position < 10
                && matrix[new_row_position][new_column_position] == '.') {
                current_row_position = new_row_position;
                current_column_position = new_column_position;
                break;
            }
        }

        matrix[current_row_position][current_column_position] = letters[i];
    }

    for (int i = 0; i < 10; i++) {
        printf("\n");
        for (int j = 0; j < 10; j++) {
            printf("%c", matrix[i][j]);
        }
    }
    
    return 0;
}
