#include <stdio.h>

int main()
{
    for (int i = 1; i < 11; ++i)
    {
        if (i % 2 == 0) // 1 % 2 == 1 // 2 % 2 == 0
        {
            continue;
        }
        printf("%d ", i);
    }
    return 0;
}