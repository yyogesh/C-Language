#include <stdio.h>

int main()
{
    int values[5];
    printf("Enter 5 integers: ");

    values[0] = 100;
    values[1] = 200;
    values[2] = 300;
    values[3] = 400;
    values[4] = 500;

    // for (int i = 0; i < 5; ++i)
    // {
    //     scanf("%d", &values[i]);
    // }
    printf("Displaying integers: %d", values[0]);
    for (int i = 0; i < 5; ++i)
    {
        printf(" %d\n", values[i]);
    }

    return 0;
}