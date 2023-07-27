#include <stdio.h>
int data1 = 0;
int main(void)
{
    static int data2 = 10; //Stored in Unintialized area
    return (0);
}