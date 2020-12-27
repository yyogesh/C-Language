#include <stdio.h>

int main()
{
    int mark[5] = {19, 10, 8, 17, 9};
    //  int mathMark[] = {19, 10, 8, 17, 9};
    // printf("Enter 5 integers: ");

    // values[0] = 100;
    // values[1] = 200;
    // values[2] = 300;
    // values[3] = 400;
    // values[4] = 500;
    mark[2] = 1000;
    // for (int i = 0; i < 5; ++i)
    // {
    //     scanf("%d", &values[i]);
    // }
    printf("Displaying integers: ");
    for (int i = 0; i < 5; ++i)
    {
        printf(" %d\n", mark[i]);
    }

    return 0;
}