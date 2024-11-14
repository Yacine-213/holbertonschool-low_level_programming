#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>  /* For size_t definition */

/* Function prototypes */
void *_calloc(unsigned int nmemb, unsigned int size);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int *array_range(int min, int max);  /* Prototype for array_range function */

#endif /* MAIN_H */

