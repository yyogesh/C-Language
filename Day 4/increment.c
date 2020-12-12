#include <stdio.h>
int main()
{
    int a = 10, b = 100;
    float c = 10.5, d = 100.5;
    // a = a + 1;
    // a += 1;
    // a++; first it wil print then add
    // ++a; first it wil add then print
    printf("++b = %d \n", b++);
    printf("++b = %d \n", b);
    printf("++a = %d \n", ++a);
    printf("--b = %d \n", --b);
    printf("++c = %f \n", ++c);
    printf("--d = %f \n", --d);

    return 0;
}