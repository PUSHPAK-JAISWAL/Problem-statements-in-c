// this is a program to find the sum and average of two numbers
#include <stdio.h>

void add(int a, int b);
void average(float total);

int main() {
    int a, b;
    
    printf("Enter First number: ");
    scanf("%d", &a);
    
    printf("Enter Second number: ");
    scanf("%d", &b);
    
    add(a, b);
    
    return 0;
}

void add(int a, int b) { 
    int result = a + b;
    printf("The addition of numbers is: %d + %d = %d\n", a, b, result);
    average(result);
}

void average(float total) {
    float avg = total / 2.0;
    printf("The Average of the addition is %.2f\n", avg);
}
