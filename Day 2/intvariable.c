#include <stdio.h>

int main()
{
    int age = 5;
    age = 10;
    printf("%u", age);
}

// Int (2 bytes), char -128 to 127, short, long (4 bytes)

// int stores a 2 byte value, ranging from -32,768 to 32,767. Ranging from -2,147,483,648 to 2,147,483,647.

// unsigned char will range from 0 to at least 255
// unsigned int will range from 0 to at least 65,535
// unsigned short will range from 0 to at least 65,535
// unsigned long will range from 0 to at least 4,294,967,295