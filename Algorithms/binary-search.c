#include<stdio.h>


int binary_search(int arr[], int x, int n) {
  int mid;
  int first = 0;
  int last = n - 1;
  while (first <= last) {
    mid = (last + first) / 2;
    if (arr[mid] == x) {
      return mid + 1;
    }
    else {
      if (x > arr[mid]) {
        first = mid + 1;
      }
      else {
        last = mid - 1;
      }
    }
  }
  return 0;
}
