#include <stdio.h>

int addNumbers(int a, int b); // function prototype
int subNumbers(int a, int b);

int main()
{
    int n1, n2, sum, sub, sum2, sum3;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    sum = addNumbers(n1, n2); // function calling
    sub = subNumbers(n1, n2);
    sum2 = addNumbers(20, 30);
    sum3 = addNumbers(40, 50);
    printf("sum = %d %d %d %d", sum, sub, sum2, sum3);
    return 0;
}

int addNumbers(int a, int b) // function definition
{
    int result;
    result = a + b;
    return result; // resturn statement
}

int subNumbers(int a, int b) // function definition
{
    int result;
    result = a - b;
    return result; // resturn statement
}