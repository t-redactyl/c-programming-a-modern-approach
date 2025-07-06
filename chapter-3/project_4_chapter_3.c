//
// Created by Jodie Burchell on 06.07.25.
//

# include <stdio.h>

int main() {
    int areaCode, phNum1, phNum2;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%3d) %3d-%4d", &areaCode, &phNum1, &phNum2);

    printf("You entered %d.%d.%d", areaCode, phNum1, phNum2);

    return 0;
}