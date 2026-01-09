//
// Created by Jodie Burchell on 09.01.26.
//
#include <stdio.h>
#include <_ctype.h>

int main() {
    int n_vowels = 0;
    char sentence;

    printf("Enter a sentence: ");
    while (sentence != '\n') {
        sentence = toupper(getchar());
        switch (sentence) {
            case 'A': case 'E': case 'I': case 'O': case 'U':
                n_vowels += 1; break;
        }
    }
    printf("Your sentence contains %d vowels.", n_vowels);
    return 0;
}