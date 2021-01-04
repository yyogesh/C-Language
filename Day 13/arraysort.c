#include <stdio.h>

int main()
{
    int i, j, temp, n, number[30];
    printf("Enter the value of N \n");
    scanf("%d", &n);

    printf("Enter the numbers \n");
    for (i = 0; i < n; ++i)
        scanf("%d", &number[i]);
    // 40, 30, 20, 50 , 10
    // 30, 40, 20, 50 , 10
    // 30, 20, 40, 50, 10
    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (number[i] > number[j])
            {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
    }

    printf("The numbers arranged in ascending order are given below \n");
    for (i = 0; i < n; ++i)
        printf("%d\n", number[i]);

    return 0;
}