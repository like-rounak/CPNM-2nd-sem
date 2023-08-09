#include <stdio.h>
 

int add(int *a, int *b) {
    return (*a) + (*b);
}
 

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
 

    int sum = add(&num1, &num2);
 
    printf("The sum of %d and %d is %d", num1, num2, sum);
 
    return 0;
}
