// this is a c program to check if a number is even or odd

#include <stdio.h>

void Number();

int main()
{
    Number();
    return 0;
}
void Number()
{
    int a;
    printf("Enter the Number :- ");
    scanf("%d",&a);
    if(a%2==0)
        printf("The Given Number is Even.");
    else
        printf("The Given Number is Odd.");
}