//
// Created by Jodie Burchell on 08.01.26.
//
#include <stdio.h>

int main() {
    printf("Size of int: %d bytes\n", (signed) sizeof(int));
    printf("Size of short int: %d bytes\n", (signed) sizeof(short));
    printf("Size of long int: %d bytes\n", (signed) sizeof(long));
    printf("Size of float: %d bytes\n", (signed) sizeof(float));
    printf("Size of double: %d bytes\n", (signed) sizeof(double));
    printf("Size of long double: %d bytes\n", (signed) sizeof(long double));

    return 0;
}