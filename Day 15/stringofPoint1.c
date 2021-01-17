#include <stdio.h>
int main()
{
    char *cities[] = {"Iran", "Iraq"};
    int i;
    for (i = 0; i < 2; i++)
        printf("%s\n", cities[i]);

    char *str = "Pointer-to-string";
    int i, j = strlen(str);
    for (i = 0; i < j; i++)
        printf("%c", *str++);

    return 0;
}

// struct stringofPoint1
// {
//     /* data */
// };
