#include <stdio.h>
int main()
{
    int i;
    FILE *fptr;
    fptr = fopen("D:/Ysquare/C/C Program/Day 16/test.txt", "w");
    fputc('x', fptr);
    fclose(fptr);
    return 0;
}