#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>

char *_strcat(char *dest, char *src);

char *_strncat(char *dest, char *src, int n);

char *_strncpy(char *dest, char *src, int n);

int _strcmp(char *s1, char *s2);

void reverse_array(int *a, int n);

char *string_toupper(char *s);

char *cap_string(char *s);

char *leet(char *s);

char *_memset(char *s, char b, unsigned int n);

char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);

char *_strchr(char *s, char c);

unsigned int _strspn(char *s, char *accept);

char *_strpbrk(char *s, char *accept);

char *_strstr(char *haystack, char *needle);

void print_chessboard(char (*a)[8]);
int _putchar(char c);

void print_diagsums(int *a, int size);

#endif /* MAIN_H */
