// This is a C program that calculates the area of a rectangle.
#include <stdio.h>

int main() {
    float length, width;
    printf("Enter the length: ");
    scanf("%f", &length);
    printf("Enter the width: ");
    scanf("%f", &width);

    if (length <= 0 || width <= 0) {
        printf("Invalid dimensions. Length and width must be positive numbers.\n");
    } else {
        float area = length * width;
        printf("The area of the rectangle is %f\n", area);
    }

    return 0;
}
