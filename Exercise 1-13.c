#include <stdio.h>

int main()
{
    int c, i, j;
    int word_length[20];
    int len = 0;

    for (i = 0; i < 20; ++i)
        word_length[i] = 0;

    while ((c = getchar()) != EOF)
    {
        if (c != ' ' && c != '\n' && c != '\t')
        {
            ++len;
        }
        else if (len > 0)
        {
            if (len < 20)
                word_length[len]++;
            
            len = 0;
        }
    }

    /* last word count */
    if (len > 0 && len < 20)
        word_length[len]++;

    
    /* print histogram */
    for (i = 1; i < 20; ++i)
    {
        printf("%d: ", i);

        for (j = 0; j < word_length[i]; ++j)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
