#include<stdio.h>
int main()
{
    int l,u;
    printf("Enter the lower and upper bounds respectively:");
    scanf("%d%d",&l,&u);
    int i,j;
    for(i=l;i<=u;i++)
    {
        int count=2;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                count++;
                break;
            }
        }
    
    if(count==2)
    printf("%d\t",i);
    }
    return 0;
}