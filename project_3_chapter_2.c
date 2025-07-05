//
// Created by Jodie Burchell on 05.07.25.
//
# include <stdio.h>
# include <math.h>

int main() {
    int radius;

    printf("Enter the radius of the sphere: ");
    scanf("%d", &radius);
    int rCubed = radius * radius * radius;
    float volume = 4.0f / 3.0f * M_PI * rCubed;

    printf("%.2f", volume);

    return 0;
}
