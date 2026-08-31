#include <stdio.h>

int main() {
    int number = 42;       // A standard integer variable
    int *ptr;              // Declaration: 'ptr' is a pointer to an integer

    ptr = &number;         // Initialization: Store the memory address of 'number' into 'ptr'

    // Practice outputting values and addresses
    printf("Value of number: %d\n", number);
    printf("Address of number (&number): %p\n", (void*)&number);
    
    printf("Value stored in ptr (the address): %p\n", (void*)ptr);
    printf("Value pointed to by ptr (*ptr): %d\n", *ptr); // Dereferencing to get 42

    return 0;
}
