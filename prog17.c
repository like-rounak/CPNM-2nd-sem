#include <stdio.h>
int i,j; 

void input(int *arr, int size) {
    for ( i = 0; i < size; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", arr+i);
    }
}
 

void print(int *arr, int size) {
    for ( i = 0; i < size; i++) {
        printf("%d ", *(arr+i));
    }
}
 

int main() {
    int size;
 
    printf("Enter size of array: ");
    scanf("%d", &size);
 
    int arr[size];
 

    input(arr, size);
 
    printf("The array is: ");
 

    print(arr, size);
 
    return 0;
}

