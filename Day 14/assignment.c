#include <stdio.h>
#include <string.h>
int main()
{
    char str[40], str1[30], substr[20];
    int h, index;

    fgets(str, sizeof(str), stdin);
    h = strlen(str);
    // printf("vlaue of string length  %d\n", h);
    for (int i = 0; i < h; i++)
    {
        if (str[i] == '\\')
        {
            index = i;
            break;
        }
    }

    //printf("vlaue of index %d", index);
    strncpy(str1, strupr(str + 0), index);
    strncpy(substr, strupr(str + (index + 2)), h - index - 2);
    printf("\n %s", str1);
    printf("\n %s", substr);

    int i, j, l, l1, l2;
    int count = 0, count1 = 0;

    l1 = strlen(str1);

    l2 = strlen(substr);

    for (i = 0; i < l1;)
    {
        j = 0;
        count = 0;
        while ((str1[i] == substr[j]))
        {
            count++;
            i++;
            j++;
        }
        if (count == l2)
        {
            count1++;
            count = 0;
        }
        else
            i++;
    }
    printf("\n %d ", count1);
    return 0;
}