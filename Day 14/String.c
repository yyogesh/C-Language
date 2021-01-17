// char c[] = "c string";
// char c[] = "abcd";
// char c[50] = "abcd";
// char c[] = {'a', 'b', 'c', 'd', '\0'};
// char c[5] = {'a', 'b', 'c', 'd', '\0'};
// \0

#include <stdio.h>
#include <string.h>

// #define DEST_SIZE 9
#define DEST_SIZE 40

int main()
{
    // char name[30];
    // printf("Enter name: ");
    // fgets(name, sizeof(name), stdin); // read string
    // printf("Name: ");
    // puts(name); // display string
    // return 0;

    // char src[] = "look here"; /* src has 9 + 1 = 10 characters */
    // char dest[DEST_SIZE];     /* dest can only hold 9 characters */

    char src[] = "Look Here";
    char dest[DEST_SIZE] = "Unimaginable";

    char *ps = src + 3;
    printf("value of %d", *ps);
    //strncpy(dest, src, 9); /* First 9 characters are copied to dest, where is the NULL character? */
    // printf(dest);
    printf("*******************");
    strncpy(dest, ps, 10);
    printf(dest);
    //char* strcpy(char* destination, const char* source);
    // for (int i = 0; i < DEST_SIZE; i++)
    // {
    //     printf("%c", dest[i]);
    // }

    return 0;
}