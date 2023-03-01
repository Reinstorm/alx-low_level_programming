#include "main.h"

/**
 * main - generates random valid passwords for the program 101-crackme
 *
 * Return: Always 0.
 */
int main(void)
{
    char password[100];

    srand(time(0));
    generate_password(password);

    printf("%s", password);
    return (0);
}
