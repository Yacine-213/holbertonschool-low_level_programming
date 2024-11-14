#ifndef MAIN_H
#define MAIN_H

#include <stddef.h> /* For NULL */

/* Function prototypes */
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);

#endif /* MAIN_H */

