#include<stdio.h>

void swap(int arr[], int i, int j) {
  if (i == j) {
    printf("\nError: i and j cannot be equal\n\n");
    return;
  }

  int iElem = arr[i];
  int jElem = arr[j];

  arr[i] = jElem;
  arr[j] = iElem;

}


int main() {
  int arr1[] = {0,1,2,3,4};
  int arr2[] = {0,1};
  int arr3[] = {0};

  swap(arr1, 1, 3);
  swap(arr2, 0, 1);
  swap(arr3, 0, 0);

  printf("arr1:\n 1st index: %i\n", arr1[1]);
  printf(" 3rd index: %i\n\n", arr1[3]);
  printf("arr2:\n 0th index: %i\n", arr2[0]);
  printf(" 1st index: %i\n\n", arr2[1]);
}
