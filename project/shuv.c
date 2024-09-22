#include<stdio.h>
int main()
{
    int BP,DA,TA,HRA,PT,IT,PF,GS,NS;
    printf("the BP is=",BP);
    scanf("%d",&BP);
    printf("the TA is=",TA);
    scanf("%d",&TA);
    PT=200;
    IT=500;
    PF=2000;
    DA=BP+1.25;
    HRA=BP+0.15;
    GS=BP+DA+TA+HRA;
    NS=GS-(PT+IT+PF);
    printf("the GS is=%d\n", GS);
    printf("the NS is=%d", NS);
    return 0;

}