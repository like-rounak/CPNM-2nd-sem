#include <stdio.h>
 
#define MAX_ROWS 10
#define MAX_COLS 10
int i,j; 

int isSparseMatrix(int mat[][MAX_COLS], int rows, int cols) {
    int numZeros = 0;
    for( i=0; i<rows; i++) {
        for( j=0; j<cols; j++) {
            if(mat[i][j] == 0) {
                numZeros++;
            }
        }
    }
    if(numZeros > ((rows*cols)/2)) {
        return 1; 
    } else {
        return 0; 
    }
}
 

void displayMatrix(int mat[][MAX_COLS], int rows, int cols) {
    for( i=0; i<rows; i++) {
        for( j=0; j<cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
 

int main() {
    int mat[MAX_ROWS][MAX_COLS], rows, cols;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);
 
    
    printf("Enter the elements of the matrix:\n");
    for( i=0; i<rows; i++) {
        for( j=0; j<cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
 
    printf("The given matrix is:\n");
    displayMatrix(mat, rows, cols);
 
    if(isSparseMatrix(mat, rows, cols)) {
        printf("The given matrix is a sparse matrix.\n");
    } else {
        printf("The given matrix is not a sparse matrix.\n");
    }
    return 0;
}
