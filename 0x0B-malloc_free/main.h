#ifndef _MAIN_H_
#define _MAIN_H_

char *create_array(unsigned int size, char c);

char *_strdup(char *str);

int **alloc_grid(int width, int height);

char *str_concat(char *s1, char *s2);

void free_grid(int **grid, int height);

char *argstostr(int ac, char **av);

char **strtow(char *str);

int _strlen(char *s);

char *str_addChar (char *str, char c);

unsigned int nbr_spaces(char *s);

char **strtow(char *str);



#endif
