#include "bCommon.h"

char *bStrdup (const char *str)
    {
    assert (str);

    char *tocopy = (char *) malloc (strlen (str) + 1);

    if (tocopy == NULL) return NULL;

    strcpy (tocopy, str);
    return tocopy;
    }
