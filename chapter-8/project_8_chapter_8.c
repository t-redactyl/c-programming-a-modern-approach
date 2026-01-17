//
// Created by Jodie Burchell on 17.01.26.
//
#include <stdio.h>
#define ROWS 5
#define COLUMNS 5

int main() {
    float scores[ROWS][COLUMNS], sum_student, sum_quiz = 0.0,
    high_score = 0.0, low_score = 20.0;

    for (int i = 0; i < ROWS; i++) {
        printf("Print the scores for student %d: ", i + 1);
        for (int j = 0; j < COLUMNS; j++) {
            scanf("%f", &scores[i][j]);
        }
    }

    for (int i = 0; i < ROWS; i++) {
        sum_student = 0.0;
        for (int j = 0; j < COLUMNS; j++) {
            sum_student += scores[i][j];
            // sum_quiz += scores[j][i];
            //
            // if (scores[j][i] > high_score) {
            //     high_score = scores[j][i];
            // }
            //
            // if (scores[j][i] < low_score) {
            //     low_score = scores[j][i];
            // }

        }
        printf("Student %d\n", i + 1);
        printf("Total score: %.2f\n", sum_student);
        printf("Average score: %.2f\n\n", sum_student / ROWS);
    }

    for (int i = 0; i < COLUMNS; i++) {
        sum_quiz = 0.0;
        high_score = 0.0;
        low_score = 20.0;
        for (int j = 0; j < ROWS; j++) {
            sum_quiz += scores[j][i];

            if (scores[j][i] > high_score) {
                high_score = scores[j][i];
            }

            if (scores[j][i] < low_score) {
                low_score = scores[j][i];
            }
        }
        printf("Quiz %d\n", i + 1);
        printf("Average score: %.2f\n", sum_quiz / COLUMNS);
        printf("Lowest score: %.2f\n", low_score);
        printf("Highest score: %.2f\n\n", high_score);
    }



    return 0;
}