#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//generate random numbers

int main()
{
    srand(time(0));

    int number1 = (rand() % 6) + 1;
    int number2 = (rand() % 6) + 1;
    int number2 = (rand() % 6) + 1;

    return 0;
}