#include<stdio.h>

void merge(int left[], int right[], int leftSize, int rightSize, int A[]) {
    int l=0, r=0, a=0;
    while (l < leftSize && r < rightSize) {
        if (left[l] < right[r]) {
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
      r++; a++;
    }
}

int main() {
  int left[4] = {1,3,5,15};
  int right[4] = {8,9,11,20};
  int a[8];
  merge(left, right, 4, 4, a);
  for (int i=0; i < 8; i++) {
    printf("%i\n", a[i]);
  }
  return 0;
}
