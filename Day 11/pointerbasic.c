#include <stdio.h>
int main()
{
    int var = 5;
    printf("var: %d\n", var);
    //scanf("%d", &var);
    printf("address of var: %p\n", &var);
    // int* x
    // int * x
    // int *x
    // int* p1, p2;
    // int* pc, c
    // c = 5;
    // pc = &c;
    // wrong // *pc = &c
    // printf("%d", *pc) // 5

    // int *pc, c;
    // c = 5;
    // pc = &c;
    // c = 1;
    // printf("%d\n", c);  // Output: 1
    // printf("%p\n", pc); // Ouptut: 1

    // int *pc, c;
    // c = 5;
    // pc = &c;
    // *pc = 1;
    // printf("%d", *pc);
    // printf("%d", c);

    int *pc, c, d;
    c = 5;
    d = -15;

    pc = &c;
    printf("%d", *pc); // Output: 5
    pc = &d;
    printf("%d", *pc); // Ouptut: -15

    return 0;
}