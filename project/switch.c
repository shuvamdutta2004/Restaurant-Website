#include<stdio.h>
#include<stdlib.h>
int main()
{
    float a,b;
    printf("enter the first number:");
    scanf("%f",&a);
    printf("Enter the second number:");
    scanf("%f",&b);
    int choice;
    printf("press 1 for Add ,2 for subtract, 3 for multiply, 4 for divide, 5 for quit\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("%f + %f = %f\n",a,b,a+b);
        break;
    case 2:
        printf("%f - %f = %f\n",a,b,a-b);
        break;
    case 3:
        printf("%f * %f = %f\n",a,b,a*b);
        break;
    case 4:
        printf("%f / %f = %f\n",a,b,a/b);
        break;
    case 5:
        exit(0);
        break;
    default:
        printf("please enter a valid operation\n");


    }
    return 0;
}
