#include "bCommon.h"

int main (void)
    {

    bPuts("bPuts() works correctly.");

    printf("Pointer to the first occurrence of \'o\' in \"Hello world\" is %p.", bStrchr("Hello World", 'o'));

    printf("\nThe length of \"Hello World\" is %d.", bStrlen("Hello World"));

    char h1[20] = "Hello ";
    printf("\n\"Hello\" + \"World\" = %s.", bStrcat(h1, "World"));

    char h2[20] = "Hello ";
    printf("\n\"Hello\" + \"World\" = %s.", bStrncat(h2, "World3645456", 5));

    char *h3 = bStrdup("Hello World");
    printf("\nPointer to the copy of \"Hello World\" is %p.",  h3);

    printf("\n5 * 5 = %d.",  bAtoi("25 rhfb"));

    return 0;
    }
