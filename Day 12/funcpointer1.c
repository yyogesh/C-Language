#include <stdio.h>

void addOne(int *ptr)
{
    (*ptr)++;
}

int main()
{
    int *p, i = 10;
    p = &i;
    addOne(p);

    printf("%d", *p);
    return 0;
}

// malloc(), calloc(), free() and realloc().
// "malloc" stands for memory allocation.

//ptr = (castType*) malloc(size);

//ptr = (float*) malloc(100 * sizeof(float)); //  4 byte

// The above statement allocates 400 bytes of memory. It's because the size of float is 4 bytes. And, the pointer ptr holds the address of the first byte in the allocated memory.
// The expression results in a NULL pointer if the memory cannot be allocated.

// "calloc" stands for contiguous allocation.
// The malloc() function allocates memory and leaves the memory uninitialized. Whereas, the calloc() function allocates memory and initializes all bits to zero.

// ptr = (float*) calloc(25, sizeof(float));

// free()
// Dynamically allocated memory created with either calloc() or malloc() doesn't get freed on their own. You must explicitly use free() to release the space.

//  realloc()

// If the dynamically allocated memory is insufficient or more than required, you can change the size of previously allocated memory using the realloc() function.