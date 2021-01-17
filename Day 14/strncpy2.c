#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20];
    char str2[50] = "welcome to beginnersbook.com";
    /* The first argument in the function is destination string. 
    * In this case we are doing full copy using the strcpy() function. 
    * Here string str2 is destination string in which we are copying the 
    * specified string 
    */
    strncpy(str1, str2, 7);
    printf("String str1: %s\n", str1);
    printf("String str2: %s\n", str2);

    char source[] = "fresh2refresh";
    char target[20] = "";
    printf("\nsource string = %s", source);
    printf("\ntarget string = %s", target);
    strncpy(target, source, 10);
    printf("\ntarget string after strcpy( ) = %s", target);
    return 0;
}