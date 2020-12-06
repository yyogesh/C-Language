#include <stdio.h> //stdio the name stands for standard input-output library
// This library gives us access to input/output functions.
int main() // This function is wrapped into a main() function.
// The main() function is the entry point of any C program.
// In the case of main(), the function gets no arguments, and returns an integer.
{
    int a = 3;
    int b = 7.9;
    //stdio is the library that provides the printf() function.
    printf("Hello world");
    //The printf() function is written differently, as you can see.
    // It has no return value defined, and we pass a string, wrapped in double quotes. We didn't specify the type of the argument.
    printf("Hello world %d", a);
    printf("Hello world float %d", b);
    return 0;
}