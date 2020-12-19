#include <stdio.h>

int main()
{
    int i = 1, j = 1;
    // while loop
    while (i <= 5)
    {
        printf("%d ", i);
        ++i;
    }
    // do while loo while loop
    do
    {
        printf("%d ", j);
        ++j;
    } while (j <= 5);

    return 0;
}