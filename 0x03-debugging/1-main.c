#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */
int main(void)
{
    int i;

    printf("Infinite loop incoming :(\n");

    i = 0;

    while (i < 10)
    {
        /* putchar(i); */ // Commented out to avoid the infinite loop
        i++; // Increment i to prevent the loop from being infinite
    }

    printf("Infinite loop avoided! \\o/\n");

    return (0);
}
