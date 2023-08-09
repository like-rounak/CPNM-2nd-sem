#include <stdio.h>
 
int factorial(int n);
int isStrong(int n);
 
int main()
{
    int low, high, i;
 
    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &low, &high);
 
    printf("Strong numbers between %d and %d are: ", low, high);
 
    for(i = low; i <= high; i++)
    {
        if(isStrong(i))
            printf("%d ", i);
    }
 
    return 0;
}
 
int factorial(int n)
{
    int fact = 1;
 
    while(n > 0)
    {
        fact *= n;
        n--;
    }
 
    return fact;
}
 
int isStrong(int n)
{
    int temp = n;
    int sum = 0;
 
    while(temp)
    {
        sum += factorial(temp % 10);
        temp /= 10;
    }
 
    return (sum == n);
}
