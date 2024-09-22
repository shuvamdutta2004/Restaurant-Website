#include<stdio.h>
int main()
{
    int l,u,s,i=0,count;
    printf("input your ranges:");
    scanf("%d %d",&l,&u);
    printf("\n all the prime number in this range are:");
    for ( i = l; i <= u; i++)
    {
        int count=2;
        for ( s = 2; s <i; s++)
        {
            if (i%s==0)
            {
                count++;
                break;
            }
            
        }
        if (count == 2)
            {
                printf("%d\t", i);
            }

    }
    return 0;
}
