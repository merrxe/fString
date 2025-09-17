#include <stdio.h>
#include <math.h>
#include <TXLib.h>
#include <string.h>
#include <stdlib.h>

#ifndef COMMON_H
#define COMMON_H

int bPuts(const char* str);
char *bStrchr(const char *str, int searched);
size_t bStrlen(const char *str);
char *bStrcat(char *str1, const char *str2);
char *bStrncat(char *str1, const char *str2, size_t num);
char *bStrdup(const char *str);
int bAtoi(const char *str);

#endif
