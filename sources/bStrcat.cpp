#include "bCommon.h"

char *bStrcat(char *str1, const char *str2)
    {
    assert(str1&&str2);

    int str1_len = strlen(str1);

    for (size_t i = 0; *(str2 + i) != '\0'; i++)
        {
        str1[str1_len + i] = str2[i];
        }

    return str1;
    }
