#include <stdio.h>
int i,j; 

void read_matrix(int n, int m, int matrix[n][m]) {
  for ( i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }
}
 

void interchange_diagonals(int n, int m, int matrix[n][m]) {
  int temp;
  for (i = 0; i < n; i++) {
    temp = matrix[i][i];
    matrix[i][i] = matrix[i][n - i - 1];
    matrix[i][n - i - 1] = temp;
  }
}
 
int main() {
  int n, m;
  int matrix[100][100];
  scanf("%d %d", &n, &m);
  read_matrix(n, m, matrix);
  interchange_diagonals(n, m, matrix);
  for ( i = 0; i < n; i++) {
    for ( j = 0; j < m; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
  return 0;
}
