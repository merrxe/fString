#include "bCommon.h"

int bAtoi(const char *str)
    {
    int num = 0;

    for (int i = 0; (0 <= *(str + i) - '0') && ( *(str + i) - '0' <= 9); i++)
        {
        num = 10 * num + *(str + i) - '0';
        }

    return num;
    }
