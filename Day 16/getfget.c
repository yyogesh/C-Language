#include <stdio.h>
int main()
{
    char string[10];
    printf("Enter the string: ");
    scanf("%s", string);
    printf("\n %s", string);
    return 0;
}

#include <stdio.h>
int main()
{
    char string[10];
    printf("Enter the String: ");
    gets(string);
    printf("\n%s", string);
    return 0;
}

#include <stdio.h>
int main()
{
    char string[20];
    FILE *fp;
    fp = fopen("file.txt", "r");
    fgets(string, 20, fp);
    printf("The string is: %s", string);
    fclose(fp);
    return 0;
}
