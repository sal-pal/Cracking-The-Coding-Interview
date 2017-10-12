int main() {
    //Test 1
    int queue1[10] = {1,2,3,4,5,NULL};
    int arr1[2];
    peak(queue1, arr1);
    printf("Test Case 1:\n");
    printf("Value of front is %i\n", arr1[0]);
    printf("Index of front is %i\n\n", arr1[1]);
    
   //Test 2
    int queue2[8] = {1,2,3,4,5,6,7};
    int arr2[2];
    peak(queue2, arr2);
    printf("Test Case 2:\n");
    printf("Value of front is %i\n", arr2[0]);
    printf("Index of front is %i\n\n", arr2[1]);
    
    //Test 3
    int queue3[8] = {1};
    int arr3[2];
    peak(queue3, arr3);
    printf("Test Case 3:\n");
    printf("Value of front is %i\n", arr3[0]);
    printf("Index of front is %i\n\n", arr3[1]);

}