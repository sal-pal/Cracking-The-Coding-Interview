/**
    1) if index >= array.size:
        //Insert val after increasing array size
        +newArrSize = getNewArrSize();
        +create new array of size newArrSize            Create new function to increase array size
        +Place all values of oldArr into newArr
        +insert val into newArr
    2) insert val into oldArr


    function enlargeArr(arr, int size): void
        1) int newArr[size]
        2) copy arr.values to newArr
        3) Assign newArr to variable pointed to by arr

**/
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


void enlargeArr(int arr[], int size) {
  int newArr[size];
  int oldArrSize = size(arr[0]) / sizeof(arr);
  for (int i=0; i < oldArrSize; i++) {
    newArr[i] = arr[i];
  }
  *arr = newArr;
}



int main () {


  /**
    //insert() test cases
    int arr[20];
    insert(15, 14, arr);
    insert(25, 24, arr);
    insert(99, 98, arr);

    printf("%i\n", arr[14]);
    printf("%i\n", arr[24]);
    printf("%i\n", arr[98]);
  **/

return 0;
}
