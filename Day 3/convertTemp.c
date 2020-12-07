#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    /* Input temperature in celsius */
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    /* fahrenheit to celsius conversion formula */
    celsius = ((fahrenheit - 32) / 9) * 5;

    printf("Temp %.2f in Fahrenheit = %.2f Centigrade", fahrenheit, celsius);

    return 0;
}