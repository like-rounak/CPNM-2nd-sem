#include <stdio.h>
int i,j; 

void reverse(int *arr, int size) {
    int *p1 = arr; 
    int *p2 = arr + size - 1; 
 
    while (p1 < p2) {
        int temp = *p1;
        *p1 = *p2;
        *p2 = temp;
 
        p1++; 
        p2--; 
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
 
    printf("Enter elements of the array: ");
 

    for ( i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
 
    printf("The original array is: ");
    print(arr, size);
 

    reverse(arr, size);
 
    printf("\nThe reversed array is: ");
    print(arr, size);
 
    return 0;
}

