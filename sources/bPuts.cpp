#include "bCommon.h"

int bPuts (const char* str)
    {
     assert (str);

    for (size_t i = 0; *(str + i) != '\0'; i++)
        putchar (*(str + i));

    putchar ('\n');
    return 0;
    }
