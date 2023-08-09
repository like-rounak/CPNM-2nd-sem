#include <stdio.h>
 
int main()
{
    int n, reversed = 0;
 
    printf("Enter a number: ");
    scanf("%d", &n);
 
    
    for( ;n > 0; n /= 10 )
    {
        
        int digit = n % 10;
 
        
        reversed = reversed * 10 + digit;
    }
 
    printf("Reversed number = %d\n", reversed);
 
    return 0;
}
