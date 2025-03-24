#include <stdio.h>

void getMatrix(int rows, int cols, int matrix[rows][cols]) {
  printf("Enter the elements of the %dx%d matrix:\n", rows, cols);
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("Element [%d][%d]: ", i + 1, j + 1);
      scanf("%d", &matrix[i][j]);
    }
  }
}

void printMatrix(int rows, int cols, int matrix[rows][cols]) {
  printf("The entered matrix is:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d\t", matrix[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int rows, cols;

  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  printf("Enter the number of columns: ");
  scanf("%d", &cols);

  int matrix[rows][cols];

  getMatrix(rows, cols, matrix);

  printMatrix(rows, cols, matrix);

  return 0;
}
