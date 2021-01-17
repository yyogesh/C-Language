#include <stdio.h>
#include <string.h>
int main()
{

    // The reason is how the function handles the tokenization. After calling strtok(input, delim), it returns the first token.
    // But we must keep calling the function again and again on a NULL input string, until we get NULL!
    // Basically, we need to keep calling strtok(NULL, delim) until it returns NULL.

    char string[50] = "Test,string1,Test,string2:Test:string3";
    char *p;
    printf("String  \"%s\" is split into tokens:\n", string);
    p = strtok(string, ",:"); // string token
    //char * strtok ( char * str, const char * delimiters );
    //The strtok function returns a pointer to the first character of the token.
    // If no token is found, a null pointer is returned.
    // [T1] [T2] [T3]
    while (p != NULL)
    {
        printf("%s\n", p); //
        p = strtok(NULL, ",:");
        // You can find additional tokens in the same string using strtok(NULL, s2)
        //because the strtok function continues the search begun by the previous strtok call.
    }
    return 0;
}

// NULL 0 '' void