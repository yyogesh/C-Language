#include <stdio.h>
#include <string.h>

int main()
{
    int len;
    const char str1[] = "ABCDEF4960910";
    const char str2[] = "413";
    len = strcspn(str1, str2);
    //size_t strcspn(const char *str1, const char *str2)
    //calculates the length of the initial segment of str1, which consists entirely of characters not in str2.
    printf("First matched character is at %d\n", len + 1);
    return 0;
}
