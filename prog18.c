#include <stdio.h>
 
int i,j;
void copy(int *src, int *dest, int size) {
    for ( i = 0; i < size; i++) {
        *(dest+i) = *(src+i);
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
 
    int src[size], dest[size];
 
    printf("Enter elements of the source array: ");
 

    for ( i = 0; i < size; i++) {
        scanf("%d", &src[i]);
    }
 

    copy(src, dest, size);
 
    printf("The source array is: ");
    print(src, size);
 
    printf("\nThe destination array is: ");
    print(dest, size);
 
    return 0;
}
