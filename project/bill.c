#include<stdio.h>
int main()
{
    int units;
    printf("Enter the total units consumed:");
    scanf("%d",&units);
    double cost=0;
    if(units<=150)
    cost=units*5.50;
    else if(units>150 && units <=250)
    cost=150*5.50+(units-150)*6.50;
    else
    {
        double costs=150*5.50+100*6.50+(units-150-100)*7.00;
        cost=costs+0.02*costs;
    }
    printf("the cost for %d units is %0.2f",units,cost);
    return 0;
}