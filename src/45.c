#include <stdio.h>
int main() {
    int i;
    printf("Enter how many numbers you want to add: ");
    scanf("%d", &i);
    
    if (i > 0) {
        int sum = 0;
        for (i; i > 0; --i) {
            sum += i;
        }
        printf("The sum of the first %d natural numbers is: %d\n", i, sum);
    } else {
        printf("Please enter a positive number.\n");
    }
    
    return 0;
}
