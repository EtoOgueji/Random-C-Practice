#include <stdio.h>

void print_alphabet(void);

int main(void)
{
    print_alphabet();
    return  (0);
}

void print_alphabet(void)
{
    int n;

    for (n = 'a'; n <= 'z'; n++)
    {
        putchar(n);
    }
}