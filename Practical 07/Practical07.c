#include <stdio.h>

void main() {
  int matrix1[3][3] = {
    {3, 2, 4},
    {2, 6, 3},
    {5, 8, 7},
  };
  int matrix2[3][3] = {
    {1, 4, 6},
    {4, 3, 2},
    {5, 7, 8},
  };
  int matrixSum[3][3];
  int i, j;

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      matrixSum[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }

  printf("Matrix sum: \n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d ", matrixSum[i][j]);
    }
    printf("\n");
  }
}
