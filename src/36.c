#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int i;

    printf("Given array: %d\n", arr[0]);
    for (i = 0; i < sizeof(arr) / sizeof(int); ++i)
        printf("%d ", arr[i]);

    return 0;
}
