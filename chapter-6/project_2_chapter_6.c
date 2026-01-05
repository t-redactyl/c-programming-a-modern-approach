//
// Created by Jodie Burchell on 05.01.26.
//
#include <stdio.h>

int main() {

    int n1, n2, a, b, r;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

     if (n1 > n2) {
         a = n1;
         b = n2;
     }
     else {
         a = n2;
         b = n1;
     }

    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }

    printf("Greatest common divisor: %d", a);

    return 0;
}