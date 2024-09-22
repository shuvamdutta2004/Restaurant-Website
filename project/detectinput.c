#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter anything:");
    scanf("%c",&ch);
    while(1)

    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    printf("input entered is an alphabet",ch);
    else if(isdigit(ch))
    printf("input entered is a digit",ch);
    else
    printf("input entered is a special character");
    return 0;
}