#include <stdio.h>

int main()
{
    char str[] = {'s', 't', 'r', '\O'};
    printf("%s", str);
    return 0;
}