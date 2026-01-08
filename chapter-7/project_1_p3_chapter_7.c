//
// Created by Jodie Burchell on 08.01.26.
//
#include <stdio.h>
#include <limits.h>

int main() {
    printf("The value of SHRT_MIN: %d\n", SHRT_MIN);
    printf("The value of SHRT_MAX: %d\n", SHRT_MAX);
    printf("The value of INT_MIN: %d\n", INT_MIN);
    printf("The value of INT_MAX: %d\n", INT_MAX);
    printf("The value of LONG_MIN: %ld\n", LONG_MIN);
    printf("The value of LONG_MAX: %ld\n", LONG_MAX);
    printf("The value of LONG_LONG_MIN: %lld\n", LONG_LONG_MIN);
    printf("The value of LONG_LONG_MAX: %lld\n", LONG_LONG_MAX);

    return 0;
}

// The value of SHRT_MIN: -32768 (16 bits)
// The value of SHRT_MAX: 32767 (16 bits)
// The value of INT_MIN: -2147483648 (32 bits)
// The value of INT_MAX: 2147483647 (32 bits)
// The value of LONG_MIN: -9223372036854775808 (64 bits)
// The value of LONG_MAX: 9223372036854775807 (64 bits)
// The value of LONG_LONG_MIN: -9223372036854775808 (64 bits)
// The value of LONG_LONG_MAX: 9223372036854775807 (64 bits)