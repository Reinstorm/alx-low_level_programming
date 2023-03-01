#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    char *s;

    s = "cisfun";
    printf("%lu\n", hash(s));
    s = "Don't forget to tweet today";
    printf("%lu\n", hash(s));
    s = "98";
    printf("%lu\n", hash(s));
    return (0);
}
