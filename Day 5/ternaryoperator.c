#include <stdio.h>
int main()
{
    int a = 10, b = 20, c;

    if (a < b)
    {
        c = a;
    }
    else
    {
        c = b;
    }

    printf("%d", c);

    c = (a < b) ? a : b;

    printf("%d", c);

    // Example 2

    int a = 1, b = 2, ans;
    if (a == 1)
    {
        if (b == 2)
        {
            ans = 3;
        }
        else
        {
            ans = 5;
        }
    }
    else
    {
        ans = 0;
    }
    printf("%d\n", ans);

    ans = (a == 1 ? (b == 2 ? 3 : 5) : 0);
    printf("%d\n", ans);

    return 0;
}
