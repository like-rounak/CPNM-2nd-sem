#include <stdio.h>
int i; 

int isPerfect(int n) {
    int sum = 0;
    for( i=1; i<n; i++) {
        if(n%i == 0) {
            sum += i;
        }
    }
    if(sum == n) {
        return 1; 
    } else {
        return 0; 
    }
}
 

void printPerfectNumbers(int start, int end) {
    printf("Perfect numbers between %d and %d are: ", start, end);
    for( i=start; i<=end; i++) {
        if(isPerfect(i)) {
            printf("%d ", i);
        }
    }
}
 

int main() {
    int start, end;
    printf("Enter the starting and ending numbers of the range: ");
    scanf("%d %d", &start, &end);
    printPerfectNumbers(start, end);
    return 0;
}
