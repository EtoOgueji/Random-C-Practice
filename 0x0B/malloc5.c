#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str)
{
    char *str2;
    unsigned int i, j;

    if (str == NULL)
        return (NULL);
    

    for (i = 0; str[i] != '\0'; i++)
    {
        ;
    }

    str2 = (char *)malloc(sizeof(char) * (i + 1));

    if (str2 == NULL)
        return(NULL);

    for (j = 0; j <= i; j++)
        str2[j] = str[j];

    return (str2);
}