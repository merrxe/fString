#include "bCommon.h"

size_t bStrlen (const char* str)
    {
    assert (str);

    size_t i = 0;
    for (i = 0; *(str + i) != '\0'; i++) {}

    return i;
    }
