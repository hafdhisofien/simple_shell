#ifndef HEADER
#define HEADER
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdarg.h>
#include <signal.h>

int child_pid(void);
int parent(void);
char **str_tow(char *str);
void cpString(int e, char *s, char **wb);
void GetWord(char **w, char *str);
int WordCount(char *str);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_getenv(const char *name, char **e);
char *_strcat(char *dest, char *src);
void _path(char **ch, char **e);
#endif
