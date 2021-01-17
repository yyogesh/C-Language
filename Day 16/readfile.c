#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    FILE *fptr;
    if ((fptr = fopen("D:/Ysquare/C/C Program/Day 16/test.txt", "r")) == NULL)
    {
        printf("Error! opening file");
        exit(1);
    }
    fscanf(fptr, "%d", &num);
    printf("Value of n=%d", num);
    fclose(fptr);
    return 0;
}

// fputc(char, file_pointer): It writes a character to the file pointed to by file_pointer.
// fputs(str, file_pointer): It writes a string to the file pointed to by file_pointer.
// fprintf(file_pointer, str, variable_lists): It prints a string to the file pointed to by file_pointer. The string can optionally include format specifiers and a list of variables variable_lists.

// fgetc(file_pointer): It returns the next character from the file pointed to by the file pointer. When the end of the file has been reached, the EOF is sent back.
// fgets(buffer, n, file_pointer): It reads n-1 characters from the file and stores the string in a buffer in which the NULL character '\0' is appended as the last character.
// fscanf(file_pointer, conversion_specifiers, variable_adresses): It is used to parse and analyze data. It reads characters from the file and assigns the input to a list of variable pointers variable_adresses using conversion specifiers. Keep in mind that as with scanf, fscanf stops reading a string when space or newline is encountered.