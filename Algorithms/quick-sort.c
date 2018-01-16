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


int main() {
  int arr[] = {4,3,2,1,0};
  partition(arr, 0, 3);
  for (int i=0; i < 5; i++) {
    printf("%i\n", arr[i]);
  }
}
