#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
char *_strdup(char *str);
int _strcmp(char *s1, char *s2);
char *rot13(char *);
char *leet(char *);
void print_number(int n);
int _putchar(char c);

#endif /* MAIN_H */
