#include <stdio.h>

void main() {
  int array[10];
  int i, min, max, sum = 0, temp;

  printf("Enter the values of the array: ");
  for (i = 0; i < 10; i++) {
    scanf("%d", &array[i]);
  }

  min = array[0];
  max = array[0];
  for (i = 1; i < 10; i++) {
    if (array[i] < min) {
      min = array[i];
    }
    if (array[i] > max) {
      max = array[i];
    }
  }

  for (i = 0; i < 10; i++) {
    sum += array[i];
  }
  float average = sum / 10.0;

  for (i = 0; i < 5; i++) {
    temp = array[i];
    array[i] = array[9 - i];
    array[9 - i] = temp;
  }

  printf("Minimum value: %d\n", min);
  printf("Maximum value: %d\n", max);
  printf("Average value: %.2f\n", average);
  printf("Reversed array: ");
  for (i = 0; i < 10; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}
