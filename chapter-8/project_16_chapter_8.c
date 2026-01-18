//
// Created by Jodie Burchell on 18.01.26.
//
#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>

int main() {
    int letter_seen[26] = {0}, index;
    char ch;
    bool all_zero = true;

    printf("Enter first word: ");
    while ((ch = getchar()) != '\n') {
        ch = tolower(ch);
        if (isalpha(ch)) {
            index = ch - 'a';
            letter_seen[index]++;
        }
    }

    printf("Enter second word: ");
    while ((ch = getchar()) != '\n') {
        ch = tolower(ch);
        if (isalpha(ch)) {
            index = ch - 'a';
            letter_seen[index]--;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (letter_seen[i] != 0) {
            all_zero = false;
            break;
        }
    }

    if (all_zero == false)
        printf("The words are not anagrams.");
    else if (all_zero == true)
        printf("The words are anagrams.");

    return 0;
}