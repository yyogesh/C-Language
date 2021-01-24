#include <stdio.h>
struct student
{
    char name[50];
    int age;
};

// function prototype
void display(struct student s);

int main()
{
    struct student s1;

    printf("Enter name: ");

    // read string input from the user until \n is entered
    // \n is discarded
    scanf("%[^\n]%*c", s1.name);

    printf("Enter age: ");
    scanf("%d", &s1.age);

    display(s1); // passing struct as an argument

    return 0;
}

void display(struct student s)
{
    printf("\nDisplaying information\n");
    printf("Name: %s", s.name);
    printf("\nAge: %d", s.age);
}

// Data Type	Format Specifier
// int	%d
// char	%c
// float	%f
// double	%lf
// short int	%hd
// unsigned int	%u
// long int	%li
// long long int	%lli
// unsigned long int	%lu
// unsigned long long int	%llu
// signed char	%c
// unsigned char	%c
// long double	%Lf