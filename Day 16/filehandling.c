//  fprintf(), fscanf(), fread(), fwrite(), fseek()
// Creating a new file
// Opening an existing file
// Closing a file
// Reading from and writing information to a file
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    FILE *fptr;

    fptr = fopen("D:/Ysquare/C/C Program/Day 16/test.txt", "w");

    if (fptr == NULL)
    {
        printf("Error file does not found!");
        exit(1);
    }

    printf("Enter num");
    scanf("%d", &num);

    fprintf(fptr, "%d", 2020);

    fclose(fptr);
    return 0;
}