#include <stdio.h>

int main()
{
    int c;
    int result;

    while ((result = (c = getchar()) != EOF)) {
        printf("%d\n", result);
        putchar(c);
    }

    printf("%d\n", result);
}