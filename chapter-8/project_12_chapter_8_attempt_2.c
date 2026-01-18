//
// Created by Jodie Burchell on 18.01.26.
//
#include <ctype.h>
#include <stdio.h>

int main() {
    int letter_values[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10},
    score = 0, index;
    char scrabble_letter;

    printf("Enter a word: ");
    while ((scrabble_letter = getchar()) != '\n') {
        scrabble_letter = toupper(scrabble_letter);

        if (scrabble_letter >= 'A' && scrabble_letter <= 'Z') {
            index = scrabble_letter - 'A';
            score += letter_values[index];
        }
    }
    printf("Scrabble value: %d", score);

    return 0;
}