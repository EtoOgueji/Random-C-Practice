#include <stdio.h>

int main(void)
{
    int n;

    for (n = 'z'; n >= 'a'; n--)
        putchar(n);
    putchar('\n');

    return (0);
}