#include <stdio.h>

int minMax(int a[], int *min, int *max, int length) {
  int i;
  *min = *max = a[0];

  for (i = 0; i < length; i++) {

    if (a[i] > *max) {
      *max = a[i];
    }
    if (a[i] < *min) {
      *min = a[i];
    }
  }
}
int main() {

  int a[] = {1,  2,   3, 4,   5, 6,   7,   8,    9,  0,  7, 6,
             54, 433, 3, 435, 6, 345, 345, 4557, 68, 67, 54};

  int length = sizeof(a) / sizeof(a[0]);

  int min, max;

  minMax(a, &min, &max, length);

  printf("The Maximum Value of this Array is %d and Minimum Value is %d ", max,
         min);

  return 0;
}