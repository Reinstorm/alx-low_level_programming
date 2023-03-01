#include "main.h"

/**
 * generate_password - generates a random valid password
 *
 * @password: pointer to password array
 */
void generate_password(char *password)
{
    int i, sum, diff, random_char;

    sum = 0;
    i = 0;

    /* generate random characters until sum of ascii values is 2772 */
    while (sum < 2772)
    {
        random_char = rand() % 94 + 33; /* ascii range of valid password chars */

        password[i] = random_char;
        sum += random_char;
        i++;
    }

    diff = sum - 2772;

    /* adjust last character to match required sum */
    if (diff != 0)
        password[i - 1] -= diff;

    password[i] = '\0';
}
