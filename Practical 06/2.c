#include <stdio.h>

void main() {
  int size, i;
  int array1[100], array2[100], array3[100];
  int scalarSum = 0, vectorSum = 0;

  printf("Enter the size of the arrays: ");
  scanf("%d", &size);

  printf("Enter the values of array1: ");
  for (i = 0; i < size; i++) {
    scanf("%d", &array1[i]);
  }
  printf("Enter the values of array2: ");
  for (i = 0; i < size; i++) {
    scanf("%d", &array2[i]);
  }

  for (i = 0; i < size; i++) {
    scalarSum += array1[i] + array2[i];
  }

  for (i = 0; i < size; i++) {
    array3[i] = array1[i] + array2[i];
    vectorSum += array3[i];
  }

  printf("Scalar sum: %d\n", scalarSum);
  printf("Vector sum: %d\n", vectorSum);
}
