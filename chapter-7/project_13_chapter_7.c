//
// Created by Jodie Burchell on 09.01.26.
//
#include <ctype.h>
#include <stdio.h>

int main() {
    char ch;
    int n_words = 1;
    float total_word_length = 0;

    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n') {
        if (ch != ' ') {
            total_word_length++;
        }
        if (ch == ' ') {
            n_words++;
        }
    }

    printf("Average word length: %.1f", total_word_length / n_words);

    return 0;
}