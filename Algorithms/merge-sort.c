#include<stdio.h>

void merge(int left[], int right[], int leftSize, int rightSize, int A[]) {
    int l=0, r=0, a=0;
    while (l < leftSize && r < rightSize) {
        if (left[l] > right[r]) {
          A[a] = left[l];
          l++; a++;
        }
        else {
          A[a] = right[r];
          r++; a++;
        }
    }
    while (l < leftSize) {
      A[a] = left[l];
      l++; a++;
    }
    while (r < rightSize) {
      A[a] = right[r];
      l++; a++;
    }
}

int main() {
  int left[4] = {8,5,4,6};
  int right[4] = {12,9,10,1};
  int a[8];
  merge(left, right, 4, 4, a);
  for (int i=0; i < 8; i++) {
    printf("%i\n", a[i]);
  }
  return 0;
}
