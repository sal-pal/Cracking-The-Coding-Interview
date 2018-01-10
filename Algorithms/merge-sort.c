#include<stdio.h>


void slice(int startIndex, int endIndex, int arrToSlice[], int outputArr[]) {
    int j = 0;
    for (int i=startIndex; i <= endIndex; i++) {
      outputArr[j] = arrToSlice[i];
      j++;
    }
}


void merge(int left[], int leftSize, int right[], int rightSize, int A[]) {
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


void mergeSort(int arr[], int arrSize) {
  if (arrSize < 2) {
    return;
  }

  int left[50];
  int leftSize = arrSize / 2;
  slice(0, leftSize-1, arr, left);

  int right[50];
  int rightSize = arrSize - leftSize;
  slice(leftSize, arrSize-1, arr, right);

  mergeSort(left, leftSize);
  mergeSort(right, rightSize);
  merge(left, leftSize, right, rightSize, arr);
}
