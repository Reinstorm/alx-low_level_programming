#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 *
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
    int i, sign, num;

    i = 0;
    sign = 1;
    num = 0;

    while (s[i])
    {
        if (s[i] == '-')
        {
            sign *= -1;
        }
        if (s[i] >= '0' && s[i] <= '9')
        {
            num = num * 10 + sign * (s[i] - '0');
            if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
            {
                break;
            }
        }
        i++;
    }

    return (num);
}
