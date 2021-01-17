#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("D:/Ysquare/C/C Program/Day 16/test.txt", "w");
    fputs("This is tutorialspoint.com", fp);

    fseek(fp, 7, SEEK_SET);
    fputs(" C Programming Language", fp);
    fclose(fp);

    return (0);
}