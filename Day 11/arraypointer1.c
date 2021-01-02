#include <stdio.h>
int main()
{
    int i, x[6], sum = 0;
    printf("Enter 6 numbers: ");
    for (i = 0; i < 6; ++i)
    {
        // Equivalent to scanf("%d", &x[i]);
        //the address of &x[0] and x is the same. It's because the variable name x points to the first element of the array.
        // it is clear that &x[0] is equivalent to x. And, x[0] is equivalent to *x.
        //&x[1] is equivalent to x+1 and x[1] is equivalent to *(x+1)
        // Basically, &x[i] is equivalent to x+i and x[i] is equivalent to *(x+i).
        scanf("%d", x + i);

        // Equivalent to sum += x[i]
        sum += *(x + i);
    }
    printf("Sum = %d", sum);
    return 0;
}