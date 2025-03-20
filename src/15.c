#include <stdio.h>

int main() {
    int i;
    printf("Enter number of rows: ");
    scanf("%d", &i);

    for (i = 1; i <= i * 2 - 1; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            printf("*");
        } else {
            printf("#");
        }
    }

    return 0;
}
