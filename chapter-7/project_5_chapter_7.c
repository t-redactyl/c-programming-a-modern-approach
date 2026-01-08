//
// Created by Jodie Burchell on 08.01.26.
//
#include <stdio.h>
#include <_ctype.h>

int main() {
    char scrabble_letter;
    int score = 0;

    printf("Enter a word: ");
    while (scrabble_letter != '\n') {
        scrabble_letter = getchar();
        scrabble_letter = toupper(scrabble_letter);
        switch (scrabble_letter) {
            case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
                score += 1; break;
            case 'D': case 'G':
                score += 2; break;
            case 'B': case 'C': case 'M': case 'P':
                score += 3; break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                score += 4; break;
            case 'K':
                score += 5; break;
            case 'J': case 'X':
                score += 8; break;
            case 'Q': case 'Z':
                score += 10; break;
        }
    }
    printf("Scrabble value: %d", score);

    return 0;
}