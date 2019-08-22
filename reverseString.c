#include <stdio.h>
#define MAXLINE 1000

void revString(char[]);

int main()
{
    char s[MAXLINE];
    revString(s);
    printf("\nreverse: %s", s);
    return 0;
}

void revString(char s[])
{
    int c, i, l, p;
    char tempS[MAXLINE];
    i = 0;
    while ((c = getchar()) != EOF)
    {
        tempS[i] = c;
        ++i;
    }
    tempS[i] = '\0';
    l = i;
    p = l - 1;
    for(i = 0; i <= p; i++)
        s[p - i] = tempS[i];
    s[l]= '\0';
}