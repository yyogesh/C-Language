#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    /* Input a integer number  */
    printf("Enter an integer: ");
    scanf("%d", &number);
    int sum = 0;
    int n = number;
    while (n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    printf(" Sum of the digit of %d is %d", number, abs(sum));
    return 0;
}