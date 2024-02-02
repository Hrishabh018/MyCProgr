#include <stdio.h>

int *Mid(int a[], int n) { 
  return &a[n / 2]; 
}

int main() {

  int a[] = {1,  2,   3, 4,   5, 6,   7,   8,    9,  7,  6,
             54, 433, 3, 435, 6, 345, 345, 4557, 68, 67, 54};

  int n = sizeof(a) / sizeof(a[0]);

  int *mid = Mid(a, n);

  printf("The Middle Value of this array is %d ", *mid);

  return 0;
}