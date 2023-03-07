#include "main.h"

int main(void)
{
    char buffer[98] = {0};

    _memset(buffer, 'H', 98);
    printf("%s\n", buffer);
    _memset(buffer + 50, 'o', 48);
    printf("%s\n", buffer);

    _memset(buffer, 0, 98);
    printf("%s\n", buffer);

    return (EXIT_SUCCESS);
}
