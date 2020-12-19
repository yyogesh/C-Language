#include <stdio.h>
int main()
{
    int first, second, temp; // 10, 20
    // first = second;
    printf("Enter first number: ");
    scanf("%d", &first);
    printf("Enter second number: ");
    scanf("%d", &second);
    // Value of first is assigned to temp
    temp = first;
    // Value of second is assigned to first
    first = second;
    // Value of temp (initial value of first) is assigned to second
    second = temp;
    printf("Value of first is %d and second is %d ", first, second);
    // first = 20
    return 0;
}