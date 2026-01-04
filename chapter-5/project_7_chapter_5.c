//
// Created by Jodie Burchell on 03.01.26.
//
#include <stdio.h>

int main() {
    int i1, i2, i3, i4, p1, p2, p3, p4, min, max;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

    if (i1 < i2) {
        p1 = i1;
        p2 = i2;
    }
    else {
        p2 = i1;
        p1 = i2;
    }

    if (i3 < i4) {
        p3 = i3;
        p4 = i4;
    }
    else {
        p4 = i3;
        p3 = i4;
    }

    if (p1 < p3)
        min = p1;
    else
        min = p3;

    if (p2 > p4)
        max = p2;
    else
        max = p4;

    printf("\nThe first number is %d", p1);
    printf("\nThe second number is %d", p2);
    printf("\nThe third number is %d", p3);
    printf("\nThe fourth number is %d", p4);

    printf("\nThe smallest number is %d", min);
    printf("\nThe largest number is %d", max);

    return 0;
}