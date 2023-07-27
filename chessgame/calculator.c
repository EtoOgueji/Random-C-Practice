#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Enter your number: ");
    scanf("%d", &a);

    printf("Enter your second number");
    scanf("%d", &b);

    printf("Your calculation is %d", a * b);

    return 0;
}