#include <stdio.h>

// Function to calculate factorial
unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    char choice;

    do {
        printf("Enter a number to calculate its factorial: ");
        scanf("%d", &num);

        printf("Factorial of %d is %llu\n", num, factorial(num));

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Program ended.\n");

    return 0;
}
