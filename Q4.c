// this is a c program to print the ascii value of a charater
#include <stdio.h>
int main()
{
    character();
    return 0;
}
void character()
{
    char c;
    printf("Enter the character :- ");
    scanf("%c",&c);
    printf("The ASCII value of the %c is %d . ",c,c);
}