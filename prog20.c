#include <stdio.h>
int i,j,k;
 
void input(int *ptr, int rows, int cols) {
    for( i = 0; i < rows; i++) {
        for( j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", ptr+i*cols+j);
        }
    }
}
 
void multiply(int *ptr1, int *ptr2, int *res, int r1, int c1, int r2, int c2) {
    for(i = 0; i < r1; i++) {
        for( j = 0; j < c2; j++) {
            *(res+i*c2+j) = 0;
            for( k = 0; k < c1; k++) {
                *(res+i*c2+j) += (*(ptr1+i*c1+k)) * (*(ptr2+k*c2+j));
            }
        }
    }
}
   
void display(int *ptr, int rows, int cols) {
    for( i = 0; i < rows; i++) {
        for( j = 0; j < cols; j++) {
            printf("%d\t", *(ptr+i*cols+j));
        }
        printf("\n");
    }
}
 
int main() {
    int r1, c1, r2, c2;
    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);
 
    if(c1 != r2) {
        printf("Matrices cannot be multiplied.");
        return 0;
    }
 
    int matrix1[r1][c1], matrix2[r2][c2], result[r1][c2];
    int *ptr1 = &matrix1[0][0], *ptr2 = &matrix2[0][0], *res = &result[0][0];
 
    printf("Enter elements of first matrix: \n");
    input(ptr1, r1, c1);
 
    printf("Enter elements of second matrix: \n");
    input(ptr2, r2, c2);
 
    multiply(ptr1, ptr2, res, r1, c1, r2, c2);
 
    printf("Product of the matrices: \n");
    display(res, r1, c2);
 
    return 0;
}
