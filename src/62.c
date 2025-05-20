#include <stdio.h>

int main() {
    int i;
    printf("Please enter how many numbers you want to add: ");
    scanf("%d", &i);

    if (i <= 0) {
        printf("You should enter a positive number.\n");
        return 1;
    }

    for (i = 0; i < i; ++i) {
        int sum = 0;
        for (int j = 0; j < i; ++j) {
            sum += j * (j + 1);
        }
        printf("%d^2 + %d*%d = ", i, i, i);
    }

    return 0;
}
