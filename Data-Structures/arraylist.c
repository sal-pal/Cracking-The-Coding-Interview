/**
    Test Cases:
      1) Functions like normal array

      2) Functions like arraylist
        -index is in 2nd range
        -Index is in 5th range
**/



int main () {
  //Test cases
  int arr[20];
  insert(15, 14, arr);
  insert(25, 24, arr);
  insert(99, 98, arr);

  printf("%i\n", arr[14]);
  printf("%i\n", arr[24]);
  printf("%i\n", arr[98]);

  return 0;
}
