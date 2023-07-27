#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;

    printf("How many numbers are you entering: ");
    scanf("%d", &n);
    int *ptr = (int *)malloc(n * sizeof(int));


    if (ptr == NULL)
    {
        //exit(EXIT_FAILURE)
        exiti(1);
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter an integer: ");
        scanf("%d", ptr + i);
    }

    for (i = 0; i < n; i++)
    {
        printf("Integer %d = %d", i, *(ptr + 1));
    }

    free(ptr);

    return 0;
}