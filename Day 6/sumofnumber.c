#include <stdio.h>

int main()
{
    int num, count, sum = 0;
    printf("Enter a positive integer ");
    scanf("%d", &num);

    for (count = 1; count <= num; ++count)
    {
        printf("Sum = %d", sum);
        sum = sum + count;
    }

    printf("finall Sum = %d", sum);
    return 0;
}