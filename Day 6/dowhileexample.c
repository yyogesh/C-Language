#include <stdio.h>
int main()
{
    double number, sum = 0;

    // the body of the loop is executed at least once
    do
    {
        printf("Enter a number: ");
        scanf("%lf", &number); // 10
        sum += number;
        printf("Sum = %.3lf \n", sum);
    } while (number != 0.0);

    printf("final Sum = %.2lf", sum);

    return 0;
}