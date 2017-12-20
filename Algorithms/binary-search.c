#include<stdio.h>


int binary_search(int arr[], int x, int n) {
  int mid;
  int first = 0;
  int last = n - 1;
  while (first != last) {
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
}


int main() {
  int arr[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
  //Should return 11
  int result = binary_search(arr, 2444, 25);
  printf("%i\n", result);
  return 0;
}



/**
    Prob: answer is 24 when x ~E of arr
      -
**/
