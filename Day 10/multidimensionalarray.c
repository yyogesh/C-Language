// int c[2][3] = {{1, 3, 0}, {-1, 5, 9}};

// c[0][0] = 1
// c[0][1] = 3
// c[0][2] = 0

// c[1][0] = -1
// c[1][1] = 5
// c[1][2] = 9

#include <stdio.h>
const int CITY = 2;
const int WEEK = 7;

int main()
{
    int temperature[CITY][WEEK];
    for (int i = 0; i < CITY; ++i) // 2
    {
        for (int j = 0; j < WEEK; ++j) // 7
        {
            printf("City %d, Day %d: ", i + 1, j + 1);
            scanf("%d", &temperature[i][j]);
        }
    }
    printf("\nDisplaying values: \n\n");

    // Using nested loop to display vlues of a 2d array
    for (int i = 0; i < CITY; ++i)
    {
        for (int j = 0; j < WEEK; ++j)
        {
            printf("City %d, Day %d = %d\n", i + 1, j + 1, temperature[i][j]);
        }
    }
    return 0;
}