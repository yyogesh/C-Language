#include <stdio.h>
long int factorial(int n);

int main()
{
    int number, result;
    printf("Enter a positive integer: ");
    scanf("%d", &number); // 10 ===> 1+ 2 + 3 + 4 + 5... 10
    result = factorial(number);
    printf("sum = %ld", result);
    return 0;
}

long int factorial(int n)
{
    if (n >= 1)
    {
        // logic
        return n * factorial(n - 1);
        // 10 + addition(9)
        // 10 + 9 + addition(8)
        // 10 + 9 + 8 + addition(7)
        // int x = 5;
        // x += 10
        // x =  x + 10;
    }
    else
        return 1;
}