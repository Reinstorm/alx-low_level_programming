/**
 * _strncat - Concatenates two strings.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Maximum number of bytes to use from src.
 *
 * Return: Pointer to resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
    int dest_len = 0, i;

    /* Get the length of dest */
    while (dest[dest_len] != '\0')
        dest_len++;

    /* Append at most n bytes from src */
    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[dest_len + i] = src[i];

    /* Add null-terminating byte */
    dest[dest_len + i] = '\0';

    return dest;
}
