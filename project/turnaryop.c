#include<stdio.h>
int main()
{
    int a,b,c,greatest;
    printf("Enter the value of a,b,c respectively:\n",a,b,c);
    scanf("%d%d%d",&a,&b,&c);
    greatest=a>b?(a>c?a:c):(b>c?b:c);
    printf("greatest=%d",greatest);
    return 0;
}