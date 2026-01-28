//
// Created by Jodie Burchell on 26.01.26.
//
#include <stdio.h>

#define N 4

int selection_sort(int n, int a[n]) {
    int largest_element = a[0], high_value, high_index;

    for (int i = 0; i < n; i++) {
        if (a[i] >= largest_element) {
            high_value = a[i];
        }
    }

    printf("%d\n", high_value);

    for (int i = 0; i < n; i++) {
        if (a[i] == high_value) {
            high_index = i;
        }
    }

    return high_index;
}

int main(void) {
    int a[N], high_index, placeholder_last, placeholder_high;

    printf("Enter %d numbers: ", N);
    for (int i = 0; i < N; i++)
        scanf("%d", &a[i]);

    printf("\n");

    high_index = selection_sort(N, a);
    printf("%d\n", high_index);

    placeholder_high = a[high_index];
    placeholder_last = a[N - 1];

    a[high_index] = placeholder_last;
    a[N - 1] = placeholder_high;

    printf("In sorted order: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}