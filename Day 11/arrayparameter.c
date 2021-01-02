#include <stdio.h>

int calculateSum(int arr[])
{
    int sum = 0;
    for (int i = 0; i < 4; ++i)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int result, age[] = {2, 8, 4, 12};
    result = calculateSum(age);
    printf("Result = %.2f", result);
    return 0;
}