// && both should be true

// T   T ==> T
// T   F ==> F
// F   F ==> F
// F   T ==> F

// ||  either of true

// T   T ==> T
// T   F ==> T
// F   F ==> F
// F   T ==> T

// ! reverse

// int a = 10
// int b = 5

// if(a == 10 && b ==5) {
//   printf("")
// }

// if(a == 11 || b == 5) {
//   printf("")
// }

#include <stdio.h>
int main()
{
    int a = 5, b = 5, c = 10, result;

    result = (a == b) && (c > b);
    printf("(a == b) && (c > b) is %d \n", result);

    result = (a == b) && (c < b);
    printf("(a == b) && (c < b) is %d \n", result);

    result = (a == b) || (c < b);
    printf("(a == b) || (c < b) is %d \n", result);

    result = (a != b) || (c < b);
    printf("(a != b) || (c < b) is %d \n", result);

    result = !(a != b);
    printf("!(a != b) is %d \n", result);

    result = !(a == b);
    printf("!(a == b) is %d \n", result);

    return 0;
}