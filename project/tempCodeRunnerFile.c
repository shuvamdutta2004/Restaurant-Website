#include<stdio.h>
int main()
{
    int a,y;
    printf("Enter the year:");
    scanf("%d",a);
    if((y%4==0 & & y%100!=0)||(y%400==0))
    printf("%d is a leap year",y);
    else
    printf("%d is not a leap year",y);
    return 0;
}
