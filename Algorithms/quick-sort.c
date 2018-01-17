#include<stdio.h>

void swap(int arr[], int i, int j) {
  int iElem = arr[i];
  int jElem = arr[j];

  arr[i] = jElem;
  arr[j] = iElem;
}


int partition(int arr[], int start, int end) {
  int pivot = arr[end];
  int pIndex = start;
  for (int i=start; i < end; i++) {
    int elem = arr[i];
    if (elem <= pivot) {
      swap(arr, i, pIndex);
      pIndex++;
    }
  }
  swap(arr, pIndex, end);
  return pIndex;
}



int quicksort(int arr[], int start, int end) {
  if (start >= end) {
    return;
  }
  int pIndex = partition(arr, start, end);
  quicksort(arr, start, pIndex-1);
  quicksort(arr, pIndex+1, end);
}



int main() {
  int arr[] = {6, 200, 10, 336, 21, 887, 89, 1};
  quicksort(arr, 0, 7);
  for (int i=0; i < 8; i++) {
    printf("%i\n", arr[i]);
  }
}
