#include <stdio.h>

// Kernel function to add two numbers


int a = 5;
int b = 3;
int y = 2;

void kernel(int a, int b, int y) {
    int i;
    
    for(i=0; i <10; i++){
        y += a + b + i;
    }
    
}

int main() {
 

    // Input two numbers
    

    // Use the kernel function to add the numbers
    kernel(a, b, y);

    // Display the result
    printf("The sum of %d and %d is: %d\n", a, b, y);

    return 0;
}
