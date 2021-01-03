#include <stdio.h>
int main()
{
    int x[4];
    int i;

    for (i = 0; i < 4; ++i)
    {
        printf("&x[%d] = %p\n", i, &x[i]);
    }

    printf("Address of array x: %p", x);
    printf("Address of array x: %d value %d", x[0], *x);
    // printf("Address of array x: %d", x);
    //the address of &x[0] and x is the same. It's because the variable name x points to the first element of the array.
    // it is clear that &x[0] is equivalent to x. And, x[0] is equivalent to *x.
    //&x[1] is equivalent to x+1 and x[1] is equivalent to *(x+1)
    // Basically, &x[i] is equivalent to x+i and x[i] is equivalent to *(x+i).
    return 0;
}