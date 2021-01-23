#include <stdio.h>
#include <string.h>
#include <malloc.h>

char *substring(char *, int, int);

int main()
{
    char string[100], *p;
    int position = 1, length = 1, t, string_length;

    printf("Enter a string\n");
    gets(string);

    t = string_length = strlen(string);

    printf("Substring of \"%s\" are\n", string);

    while (position <= string_length)
    {
        while (length <= t)
        {
            p = substring(string, position, length);
            printf("%s\n", p);
            free(p);
            length++;
        }
        t--;
        position++;
        length = 1;
    }

    return 0;
}

char *substring(char *string, int position, int length)
{
    char *p;
    int c;

    p = malloc(length + 1);

    if (p == NULL)
    {
        printf("Unable to allocate memory.\n");
    }

    for (c = 0; c < length; c++)
    {
        *(p + c) = *(string + position - 1);
        string++;
    }

    *(p + c) = '\0';

    return p;
}

//A string of length n has [n*(n+1)/2 +1] substrings. They are unique, if all the characters in the string are different.
// Consider the string: a1a2a3..............an-1an
// Number of substrings of length n: 1 [(a1a2a3..............an-1an)]
// Number of substrings of length (n-1): 2 [(a1a2a3..............an-1), (a2a3..............an-1an)]
// Number of substrings of length (n-2): 3 [(a1a2a3..............an-2), (a2a3..............an-1), (a3a3..............an)]
// Number of substrings of length 3: (n-3) [(a1a2a3), (a2a3a4), (a3a4a5),................,(an-2an-1an)]
// Number of substrings of length 2: (n-2) [(a1a2), (a2a3), (a3a4),...........,(an-1an)]
// Number of substrings of length 1: (n) [(a1), (a2), (a3),...........,(an-1), (an)]
// Number of substrings of length 0 (empty string): 1 []
