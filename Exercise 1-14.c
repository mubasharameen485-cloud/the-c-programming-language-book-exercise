#include <stdio.h>

int main()
{
    int c, i, j;
    int char_count[26];

    for (i = 0; i < 26; i++)
    {
        char_count[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c >= 'a' && c <= 'z')
        {
            char_count[c - 'a']++;
        }
        else if (c >= 'A' && c <= 'Z')
        {
            char_count[c - 'A']++;
        }
    }

    /* print histogram */
    for (i = 0; i < 26; i++)
    {
        printf("%c: ", 'a' + i);

        for (j = 0; j < char_count[i]; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
