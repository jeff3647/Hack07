#include <stdlib.h>
#include <stdio.h>
#include "array_utils.h"

int contains(const int *arr, int size, int x) {
  int k, j;
  for (k = 0; k <= size; k++) {
    if (x == arr[k]) {
      printf("The x is in this array\n");
      return 0;
    }
  }
  printf("x is not in this array\n");
  return 0;
}

int *paddedCopy(const int *arr, int oldSize, int newSize) {
  if (newSize < oldSize) {
    int *deepCopy = (int *)malloc(sizeof(int) * newSize);
    return 0;
  }
  int i = 0, n, k;
  int *deepCopy = (int *)malloc(sizeof(int) * newSize);
  if (newSize > oldSize) {
    for (i = 0; i < oldSize; i++) {
      deepCopy[i] = arr[i];
    }
    for (i = oldSize - 1; i < newSize; i++) {
      deepCopy[i] = 0;
    }
    for (i = 0; i < newSize; i++) {
      printf("arr[%d]=%d\n", i, deepCopy[i]);
    }
  }
}

void reverse(int *arr, int size) {
  int i, temp1, temp2;
  for (i = 0; i <= size / 2; i++) {
    temp2 = arr[i];
    temp1 = arr[size - 1 - i];

    arr[i] = temp1;

    arr[size - i - 1] = temp2;
  }
  for (i = 0; i < size; i++) {
    printf("arr[%d]=%d\n", i, arr[i]);
  }
}

int *reverseCopy(const int *arr, int size) {
  int i, temp1, temp2;
  int *reCopy = (int *)malloc(sizeof(int) * size);
  for (i = 0; i < size; i++) {
    reCopy[i] = arr[i];
  }
  for (i = 0; i <= size; i++) {
    reCopy[i] = arr[size - 1 - i];
  }
  for (i = 0; i < size; i++) {
    printf("arr[%d]=%d\n", i, reCopy[i]);
  }
  return reCopy;
}
