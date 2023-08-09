#include <stdio.h>
 
int main()
{
    int n, firstDigit, lastDigit;
 
    printf("Enter a number: ");
    scanf("%d", &n);
 
    lastDigit = n % 10;

    while(n >= 10)
    {
        n = n / 10;
    }
    firstDigit = n;
 
    printf("First digit = %d\n", firstDigit);
    printf("Last digit = %d\n", lastDigit);
 
    return 0;
}
