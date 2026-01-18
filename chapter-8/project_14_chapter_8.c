//
// Created by Jodie Burchell on 18.01.26.
//
#include <stdio.h>
#include <ctype.h>

int main() {
    char sentence[100], ch, terminating_char;
    int sentence_index = 0, word_start_index, word_end_index;

    printf("Enter a sentence: ");
    while ((ch = getchar()) != '.' && ch != '!' && ch != '?') {
        sentence[sentence_index++] = tolower(ch);
    }

    terminating_char = ch;

    printf("Reversal of sentence: ");
    word_end_index = sentence_index;

    for (int i = sentence_index - 1; i >= 0; i--) {
        if (sentence[i] == ' ') {
            for (int j = i + 1; j < word_end_index; j++) {
                printf("%c", sentence[j]);
            }
            printf(" ");
            word_end_index = i;
        }
    }

    for (int j = 0; j < word_end_index; j++) {
        printf("%c", sentence[j]);
    }

    printf("%c\n", terminating_char);

    return 0;
}
