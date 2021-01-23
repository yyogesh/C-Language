#include <stdio.h>
#include <conio.h>
#include <string.h>

int isPalindrome(char *inputString, int leftIndex, int rightIndex);

int main()
{
    char inputString[100];
    printf("Enter a string for palindrome check\n");
    scanf("%s", inputString); // COLOR // MADAM

    if (isPalindrome(inputString, 0, strlen(inputString) - 1))
    {
        printf("%s is a Palindrome \n", inputString);
    }
    else
    {
        printf("%s is not a Palindrome \n", inputString);
    }
    return 0;
}

int isPalindrome(char *inputString, int leftIndex, int rightIndex)
{
    // MADAM, 0, 4
    // MADAM, 1, 3
    // MADAM, 2, 2
    /* Input Validation */
    if (NULL == inputString || leftIndex < 0 || rightIndex < 0)
    {
        printf("Invalid Input");
        return 0;
    }
    /* Recursion termination condition */
    if (leftIndex >= rightIndex)
        return 1;
    if (inputString[leftIndex] == inputString[rightIndex])
    {
        return isPalindrome(inputString, leftIndex + 1, rightIndex - 1);
    }
    return 0;
}
