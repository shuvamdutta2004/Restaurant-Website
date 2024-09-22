#include <stdio.h>

int main() 
{
    char input;

    printf("Enter a character: ");
    scanf("%c", &input);

    if (input >= 'a' && input <= 'z') 
    {
        input = input - 32; // converting lowercase to uppercase
    } 
    else if (input >= 'A' && input <= 'Z') 
    {
        input = input + 32; // converting uppercase to lowercase
    }

    printf("Converted character: %c\n", input);

     return 0;
}
