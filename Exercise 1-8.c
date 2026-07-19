#include <stdio.h>

/* count lines in input */
int main()
{
    int c, nl,t,s;

    nl = 0;
    t=0;
    s=0;
    while ((c = getchar()) != EOF){
        if (c == '\n'){
            ++nl;
        }
        if(c == ' '){
             ++s;
        }
        if(c == '\t'){
            ++t;
        }
        
            
    }
           
    printf("%d\n", nl);
    printf("%d\n", t);
    printf("%d\n", s);


}