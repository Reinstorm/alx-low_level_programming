#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 *
 * Return: integer value of string, or 0 if no integer found
 */
int _atoi(char *s)
{
    int sign = 1;
    int result = 0;

    while (*s)
    {
        if (*s == '-')
            sign *= -1;
        if (*s >= '0' && *s <= '9')
            result = (result * 10) + (*s - '0');
        if (result && (*s < '0' || *s > '9'))
            break;
        s++;
    }

    return (sign * result);
}
