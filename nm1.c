#include <stdio.h>
#include <stdlib.h>

#define N 3  // Number of unknowns

void printMatrix(double A[N][N+1]) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N + 1; j++) {
            printf("%.2f\t", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void gaussJordanElimination(double A[N][N+1]) {
    int i, j, k;
    double temp;
    
    for (i = 0; i < N; i++) {
        if (A[i][i] == 0.0) {
            printf("Pivot element is zero. Cannot perform Gauss-Jordan elimination.\n");
            return;
        }
        
        for (j = 0; j < N; j++) {
            if (i != j) {
                temp = A[j][i] / A[i][i];
                
                for (k = 0; k < N + 1; k++) {
                    A[j][k] = A[j][k] - temp * A[i][k];
                }
            }
        }
    }
    
    for (i = 0; i < N; i++) {
        temp = A[i][i];
        
        for (j = 0; j < N + 1; j++) {
            A[i][j] = A[i][j] / temp;
        }
    }
}

void matrixInversion(double A[N][N]) {
    int i, j, k;
    double ratio, temp;
    double identity[N][N*2];
    
    // Initializing augmented matrix with identity matrix
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            identity[i][j] = A[i][j];
            identity[i][j+N] = (i == j) ? 1 : 0;
        }
    }
    
    gaussJordanElimination(identity);
    
    printf("Inverse of the matrix:\n");
    for (i = 0; i < N; i++) {
        for (j = N; j < N*2; j++) {
            printf("%.2f\t", identity[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void jacobiMethod(double A[N][N], double B[N], double X[N], int maxIterations, double tolerance) {
    int i, j, iteration;
    double sum;
    double newX[N];
    
    for (iteration = 1; iteration <= maxIterations; iteration++) {
        for (i = 0; i < N; i++) {
            sum = 0.0;
            
            for (j = 0; j < N; j++) {
                if (j != i) {
                    sum += A[i][j] * X[j];
                }
            }
            
            newX[i] = (B[i] - sum) / A[i][i];
        }
        
        int isConverged = 1;
        for (i = 0; i < N; i++) {
            if (fabs(newX[i] - X[i]) > tolerance) {
                isConverged = 0;
                break;
            }
        }
        
        if (isConverged) {
            printf("Jacobi's method converged after %d iterations.\n", iteration);
            return;
        }
        
        for (i = 0; i < N; i++) {
            X[i] = newX[i];
        }
    }
    
    printf("Jacobi's method did not converge within the specified
