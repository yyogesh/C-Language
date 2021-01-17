#include <stdio.h>

int main(void)
{
    char name[] = "Harry Potter";
    printf("%c", *name);       // name[0] ;
    printf("%c", *(name + 1)); // name[1]
    printf("%c", *(name + 7));

    char *namePtr;
    namePtr = name;
    printf("%c", *namePtr);       // Output: H
    printf("%c", *(namePtr + 1)); // Output: a
    printf("%c", *(namePtr + 7)); // Output: o
    return 0;
}