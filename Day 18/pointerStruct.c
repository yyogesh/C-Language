#include <stdio.h>
struct person
{
    int age;
    float weight;
};
int main()
{
    struct person *personPtr, person1;
    personPtr = &person1;
    // the address of person1 is stored in the personPtr pointer using personPtr = &person1;.
    printf("Enter age: ");
    scanf("%d", &personPtr->age);
    //personPtr->age is equivalent to (*personPtr).age
    printf("Enter weight: ");
    scanf("%f", &personPtr->weight);

    printf("Displaying:\n");
    printf("Age: %d\n", personPtr->age);
    printf("weight: %f", personPtr->weight);
    return 0;
}