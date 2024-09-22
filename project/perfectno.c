#include <stdio.h>
int isPerfect(int num) 
{
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) 
    {
        if (num % i == 0) 
        {
            sum += i;
        }
    }
    return sum == num;
}

int main() 
{
    int start, end;
    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);

    printf("Perfect numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) 
    {
        if (isPerfect(i)) 
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
