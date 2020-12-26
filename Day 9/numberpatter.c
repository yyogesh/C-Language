#include <stdio.h>
int main()
{
    int i, space, rows, k = 0, count = 0, count1 = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; ++i)
    {
        for (space = 1; space <= rows - i; ++space)
        {
            // printf("value of i %d and value of space %d \n", i, space);
            printf(" ");
            ++count;
        }
        while (k != 2 * i - 1) // 1, 3, 5, 7
        {
            if (count <= rows - 1) // increase
            {
                printf("%d", i + k);
                ++count;
            }
            else
            {
                ++count1;
                printf("%d", (i + k - 2 * count1));
            }
            ++k;
        }
        count1 = count = k = 0;
        printf("\n");
    }
    return 0;
}

//        1
//      2 3 2
//     3 4 5 4 3
//   4 5 6 7 6 5 4
// 5 6 7 8 9 8 7 6 5