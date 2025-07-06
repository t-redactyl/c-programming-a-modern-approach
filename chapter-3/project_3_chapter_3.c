//
// Created by Jodie Burchell on 06.07.25.
//

#include <stdio.h>

int main() {
    int gs1Prefix, groupID, pubCode, itemNum, checkDigit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d",
            &gs1Prefix,
            &groupID,
            &pubCode,
            &itemNum,
            &checkDigit
          );

    printf("GS1 prefix: %d\n", gs1Prefix);
    printf("Group identifier: %d\n", groupID);
    printf("Publisher code: %d\n", pubCode);
    printf("Item number: %d\n", itemNum);
    printf("Check digit: %d\n", checkDigit);

    return 0;
}