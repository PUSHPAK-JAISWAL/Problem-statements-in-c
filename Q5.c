// this is a program to cube of integer using the two different method
#include <stdio.h>
#include <math.h>

// Function declarations
void cube_multiplication(int a);
void cube_pow(int a);

int main() {
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    cube_multiplication(a);
    cube_pow(a);
    return 0;
}

void cube_multiplication(int a) {
    long cube;
    cube = a * a * a;
    printf("By Multiplication method: %ld\n", cube);
}

void cube_pow(int a) {
    long cube = pow(a, 3);
    printf("By pow() function method: %ld\n", cube);
}

