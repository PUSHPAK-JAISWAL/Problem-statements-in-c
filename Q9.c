// this is a program to check greatest among the three numbers

#include <stdio.h>

void Greatest();

int main()
{
    Greatest();
    return 0;
}

void Greatest()
{
    int a,b,c;
    printf("Enter the First number :- ");
    scanf("%d",&a);
    printf("Enter the Second number :- ");
    scanf("%d",&b);
    printf("Enter the Third number :- ");
    scanf("%d",&c);
    if(a>b && a>c)
        printf("The Number %d is Greatest Among %d,%d,%d ",a,a,b,c);
    else if(b>a && b>c)
        printf("The Number %d is Greatest Among %d,%d,%d ",b,a,b,c);
    else
        printf("The Number %d is Greatest Among %d,%d,%d ",c,a,b,c);
}