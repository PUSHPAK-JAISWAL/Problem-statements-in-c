// this is a c program to find the questient and remainder 
#include <stdio.h>

void quotient(int a, int b);
void remainder(int a, int b);

int main() {
    int a, b;
    printf("Enter the Numerator: ");
    scanf("%d", &a);
    printf("Enter the Denominator: ");
    scanf("%d", &b);

    if (b != 0) {
        quotient(a, b);
        remainder(a, b);
    } else {
        printf("Error: Division by zero!\n");
    }

    return 0;
}

void quotient(int a, int b) {
    printf("The Quotient is: %d\n", a / b);
}

void remainder(int a, int b) {
    printf("The Remainder is: %d\n", a % b);
}
