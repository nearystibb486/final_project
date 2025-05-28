#include <stdio.h>

void main() {
    int i;

    printf("Hello, World!\n");

    for(i = 0; i <= 10; i++) {
        if(i % 2 == 0) {
            printf("%d is an even number.\n", i);
        } else {
            printf("%d is an odd number.\n", i);
        }
    }

    printf("This program is a simple console application that prints 'Hello, World!\n' followed by the output of even and odd numbers.");
}
