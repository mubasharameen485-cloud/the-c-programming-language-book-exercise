#include <stdio.h>
#include <stdlib.h>

int main() {
    // Stack variable
    int x = 100;

    // Heap variable
    int *y = (int *)malloc(sizeof(int));

    *y = 200;

    printf("Stack value: %d\n", x);
    printf("Heap value: %d\n", *y);

    printf("Sum = %d\n", x + *y);

    free(y);

    return 0;
}