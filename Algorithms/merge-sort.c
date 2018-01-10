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


void slice(int startIndex, int endIndex, int arrToSlice[], int outputArr[]) {
    int j = 0;
    for (int i=startIndex; i <= endIndex; i++) {
      outputArr[j] = arrToSlice[i];
      j++;
    }
}


void mergeSort(int arr[], int arrSize) {
  /**
      1) If arrSize < 2:
        a) return from the function
      2) Create left array
      3) Find size of left array
      4) Create right array
      5) Find size of right array
      6) Pass left array to mergeSort()
      7) Pass right array to mergeSort()
      8) merge left and right arrays


      2) Create left array
        -Split the single array in half
        -Also know the size of the new array.
        Steps:
          1) Find the size of the new array
          2) Select all elements from 0-(size-1)


      4) Create right array
        1) Find size of the right array
        2) Select all elements from leftSize - arrSize


  **/
}



int main() {
  int arr[] = {8,9,11,20,1,3,5,15}
  mergeSort(arr);
  for (int i=0; i < 8; i++) {
    printf("%i\n", arr[i]);
  }
  return 0;
}
