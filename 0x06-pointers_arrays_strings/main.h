#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>

char *_strcat(char *, char *);
char *_strncat(char *, char *, int);
char *_strncpy(char *, char *, int );
int _strcmp(char *, char *);
void reverse_array(int *a, int n);
char *string_toupper(char *);

#endif/* MAIN_H */
