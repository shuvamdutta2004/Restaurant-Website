#include<stdio.h>
#include<math.h>
#define PI 3.1416
#define MAX 180
int main()
{
    int angle;
    float x,y;
    printf("enter your cos angle:");
    scanf("%d", &angle);
    x=(PI/MAX)*angle;
    y=cos(x);
    printf("cos(%d)=%f",angle,y);
    return 0;
}
