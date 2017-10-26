#include<stdio.h>
#include<errno.h>


int getNewArrSize(int oldArrSize, int index) {
  if (oldArrSize >= index) {
    perror("oldArrSize cannot be greater than index for function getNewArrSize");
  }
  int newArrSize = oldArrSize * 2;
  while (newArrSize <= index) {
    newArrSize = newArrSize + oldArrSize;
  }
  return newArrSize;
}


void enlargeArr(int arr[], int newSize) {
  int newArr[newSize];
  int oldArrSize = sizeof(arr[0]) / sizeof(arr);
  for (int i=0; i < oldArrSize; i++) {
    newArr[i] = arr[i];
  }
  arr = &newArr;
}


void insert(int arrList[], int index, int value) {
  int arrListSize = sizeof(arrList[0]) / sizeof(arrList);
  if (index >= arrListSize) {
    //Insert value after arrayList size is increased
    int newArrListSize = getNewArrSize(arrListSize, index);
    enlargeArr(arrList, newArrListSize);
  }
  arrList[index] = value;
}


int main () {
  //Test Cases
  int arr[20];
  insert(arr, 14, 15);
  insert(arr, 24, 25);
  insert(arr, 98, 99);

  printf("%i\n", arr[14]);
  printf("%i\n", arr[24]);
  printf("%i\n", arr[98]);

  return 0;
}
