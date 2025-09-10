#include "bCommon.h"

char *bStrchr(const char *str, int searched)
    {
    for (size_t i = 0; *(str + i) != '\0'; i++)
        if (*(str + i) == searched)
            {
            return (char*) str + i;
            }

    return NULL;
    }
