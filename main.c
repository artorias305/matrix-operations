#include <stdio.h>

void getMatrix(int rows, int cols, int matrix[rows][cols]) {
  printf("Enter the elements for a %dx%d matrix:\n", rows, cols);
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("Element [%d][%d]: ", i + 1, j + 1);
      scanf("%d", &matrix[i][j]);
    }
  }
}

void printMatrix(int rows, int cols, int matrix[rows][cols]) {
  printf("Matrix:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d\t", matrix[i][j]);
    }
    printf("\n");
  }
}

void addMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      result[i][j] = mat1[i][j] + mat2[i][j];
    }
  }
}

void subtractMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      result[i][j] = mat1[i][j] - mat2[i][j];
    }
  }
}

void multiplyMatrices(int r1, int c1, int r2, int c2, int mat1[r1][c1], int mat2[r2][c2], int result[r1][c2]) {
  for (int i = 0; i < r1; i++) {
    for (int j = 0; j < c2; j++) {
      result[i][j] = 0;
    }
  }

  for (int i = 0; i < r1; i++) {
    for (int j = 0; j < c2; j++) {
      for (int k = 0; k < c1; k++) {
        result[i][j] += mat1[i][k] * mat2[k][j];
      }
    }
  }
}

int main() {
  int rows, cols;

  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  printf("Enter the number of columns: ");
  scanf("%d", &cols);

  int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols], sub[rows][cols];

  printf("Enter the values for the first matrix:\n");
  getMatrix(rows, cols, matrix1);

  printf("Enter the values for the second matrix:\n");
  getMatrix(rows, cols, matrix2);

  addMatrices(rows, cols, matrix1, matrix2, sum);
  subtractMatrices(rows, cols, matrix1, matrix2, sum);

  printf("Resultant matrix after addition:\n");
  printMatrix(rows, cols, sum);

  printf("Resultant matrix after subtraction:\n");
  printMatrix(rows, cols, sub);

  return 0;
}
