/**
    getSizeOfNewArr()
        -Return value is based on how big an array needs to be in order to use the index.
        -Input:
            a) oldArrSize (int)
            b) index (int)
        -Output
            a) sizeOfNewArr (int)

        -Error
            a) If oldArrSize > index, then throw error message

        -Steps:
            1) If oldArrSize > index, then print error message and return
                -perror()
                  -Accepts a string that is the error message
                  -Must assign correct error code to errno
                  -https://www.tutorialspoint.com/cprogramming/c_error_handling.htm
            2) newArrSize = oldArrSize * 2
            3) while newArrSize <= index:
                newArrSize = newArrSize + oldArrSize
            4) return newArrSize

**/
#include<stdio.h>
#include<errno.h>


int getNewArrSize(int oldArrSize, int index) {
  if (oldArrSize > index) {
    perror("oldArrSize cannot be greater than index for function getNewArrSize");
  }
  int newArrSize = oldArrSize * 2;
  while (newArrSize <= index) {
    newArrSize = newArrSize + oldArrSize;
  }
  return newArrSize;
}



int main () {

printf("%i\n", getNewArrSize(1, 2));
printf("%i\n", getNewArrSize(100, 1002));
getNewArrSize(2, 1);


return 0;

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
}
