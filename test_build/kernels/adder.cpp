#include <stdio.h>

// Kernel function to add two numbers
int kernel(int a, int b) {
    return a + b;
}

int main() {
    int a, b, y;

    // Input two numbers
    a = 5;
    b = 3;

    // Use the kernel function to add the numbers
    y = kernel(a, b);

    // Display the result
    printf("The sum of %d and %d is: %d\n", a, b, y);

    return 0;
}
