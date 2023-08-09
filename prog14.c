#include <stdio.h>
 
#define MAX_ROWS 10
#define MAX_COLS 10
int i,j; 

void transposeMatrix(int mat[][MAX_COLS], int rows, int cols) {
    int transposedMat[MAX_ROWS][MAX_COLS];
    for( i=0; i<rows; i++) {
        for( j=0; j<cols; j++) {
            transposedMat[j][i] = mat[i][j];
        }
    }
    printf("The transpose of the matrix is:\n");
    for( i=0; i<cols; i++) {
        for( j=0; j<rows; j++) {
            printf("%d ", transposedMat[i][j]);
        }
        printf("\n");
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
    for(i=0; i<rows; i++) {
        for( j=0; j<cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
 
    printf("The given matrix is:\n");
    displayMatrix(mat, rows, cols);
 
    transposeMatrix(mat, rows, cols);
 
    return 0;
}

