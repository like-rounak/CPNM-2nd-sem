#include <stdio.h>
#include <stdbool.h>
 
bool isPrime(int num);
 
int main()
{
    int low, high, i;
 
    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &low, &high);
 
    printf("Prime numbers between %d and %d are: ", low, high);
 
    for(i = low; i <= high; i++)
    {
        if(isPrime(i))
            printf("%d ", i);
    }
 
    return 0;
}
 
bool isPrime(int num)
{
    int i;
 
    if(num <= 1)
        return false;
 
    for(i = 2; i <= num/2; i++)
    {
        if(num % i == 0)
            return false;
    }
 
    return true;
}
