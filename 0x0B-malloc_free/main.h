#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * File: main.h
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x0A-malloc_free directory.
 */

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif

