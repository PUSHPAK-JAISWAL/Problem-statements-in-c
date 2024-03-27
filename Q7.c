// this a program to calculate the simple interest
#include <stdio.h>

void SimpleInterest();

int main()
{
    SimpleInterest();
    return 0;
}

void SimpleInterest()
{
    int P,R,T;
    float SI;
    printf("Enter the Principal amount :- ");
    scanf("%d",&P);
    printf("Enter the Rate of Interest :- ");
    scanf("%d",&R);
    printf("Enter the Time required to repay (In Years) :-");
    scanf("%d",&T);
    SI=(P*R*T)/100;
    printf("The Simple Interest is %.2f",SI);
}