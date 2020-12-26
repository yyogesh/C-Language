#include <stdio.h>
int addition(int n);

int main()
{
    int number, result;
    printf("Enter a positive integer: ");
    scanf("%d", &number); // 10 ===> 1+ 2 + 3 + 4 + 5... 10
    result = addition(number);
    printf("sum = %d", result);
    return 0;
}

int addition(int n)
{
    if (n != 0)
    {
        // logic
        return n + addition(n - 1);
        // 10 + addition(9)
        // 10 + 9 + addition(8)
        // 10 + 9 + 8 + addition(7)
        // int x = 5;
        // x += 10
        // x =  x + 10;
    }
    else
        return n;
}