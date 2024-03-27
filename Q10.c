// this is a program to check if a person is eligible for voting or not
#include <stdio.h>

void voting();

int main()
{
    voting();
    return 0;
}

void voting()
{
    int a;
    printf("Enter your age. :- ");
    scanf("%d",&a);
    if(a>=18)
    {
        printf("You are Eligible for voting.");
    }
    else
    {
        printf("You are not Eligible for voting");
    }
}