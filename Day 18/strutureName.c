struct Person
{
    char name[50];
    int age;
    float salary;
} person1, person2, p[5];

int main()
{
    struct Person person1, person2, p[5];
    return 0;
}
// *******************************
struct Distance
{
    int feet;
    float inch;
};
// *******************************
int main()
{
    struct Distance d1, d2;
}

// *******************************

typedef struct Distance
{
    int feet;
    float inch;
} distances;

int main()
{
    distances d1, d2;
}

// *******************************

struct complex
{
    int imag;
    float real;
};

struct number
{
    struct complex x1;
    int integers;
} num1, num2;
