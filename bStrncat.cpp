#include "bCommon.h"

char *bStrncat(char *str1, const char *str2, size_t num)
    {
    int str1_len = strlen(str1);

    for (size_t i = 0; *(str2 + i) != '\0' && i < num; i++)
        {
        str1[str1_len + i] = str2[i];
        }

    return str1;
    }
