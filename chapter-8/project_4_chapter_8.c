//
// Created by Jodie Burchell on 17.01.26.
//
#include <stdio.h>

#define SIZE ((int) (sizeof(a) / sizeof(a[0])))
#define N 3

int main() {
    int a[N], i;

    printf("Enter %d numbers: ", SIZE);
    for (i = 0; i < SIZE; i++)
        scanf("%d", &a[i]);

    printf("In reverse order:");
    for (i = SIZE - 1; i >= 0; i--)
        printf(" %d", a[i]);
    printf("\n");

    return 0;
}