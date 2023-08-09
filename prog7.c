#include <stdio.h>
 
int main()
{
    long long n;
    int i, lastDigit;
    int freq[10];
 
    for(i = 0; i < 10; i++)
    {
        freq[i] = 0;
    }
 
    printf("Enter a number: ");
    scanf("%lld", &n);
 
    
    while(n != 0)
    {
        
        lastDigit = n % 10;
 
        
        freq[lastDigit]++;
 
        
        n /= 10;
    }
 
    
    printf("Frequency of each digit in the given number: \n");
    for(i = 0; i < 10; i++)
    {
        printf("Frequency of %d = %d\n", i, freq[i]);
    }
 
    return 0;
}
