//
// Created by Jodie Burchell on 05.07.25.
//
# include <stdio.h>
# include <math.h>

int main() {
    const int radius = 10;
    int rCubed = radius * radius * radius;
    float volume = 4.0f / 3.0f * M_PI * rCubed;

    printf("%.2f", volume);

    return 0;
}