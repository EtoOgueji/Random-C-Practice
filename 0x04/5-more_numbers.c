#include <stdio.h>

void more_numbers(void)
{
    int i, j;

    for (i = 1; i <= 10; i++)
    {
        for (j = 0; j <= 14; j++)
        {
            if (j >= 10)
            {
                putchar('1');

                putchar(j % 10 + '0');
            }

            else
            {
                putchar(j + '0');
            }
        }
        putchar('\n');
    }
}

int main(void)
{
    more_numbers();
    return (0);
}
