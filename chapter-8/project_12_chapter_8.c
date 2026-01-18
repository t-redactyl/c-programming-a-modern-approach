//
// Created by Jodie Burchell on 18.01.26.
//
#include <ctype.h>
#include <stdio.h>

int main() {
    int letter_values[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10},
    score = 0, index;
    char letters[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
                'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'},
    scrabble_letter;

    printf("Enter a word: ");
    while ((scrabble_letter = getchar()) != '\n') {
        scrabble_letter = toupper(scrabble_letter);

        index = 0;
        for (int i = 0; i < 26; i++) {
            index++;
            if (letters[i] == scrabble_letter)
                break;
        }
        score += letter_values[index - 1];

        // printf("Letter: %c\n", scrabble_letter);
        // printf("Index: %d\n", index);
        // printf("Letter score: %d\n", letter_values[index - 1]);
        // printf("Score: %d\n\n", score);
    }
    printf("Scrabble value: %d", score);

    return 0;
}