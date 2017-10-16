#include<stdio.h>
#include<stdbool.h>



// 			MAKE SURE isFull RETURNS TRUE WHEN PASS FULL ARRAY





int main() {
  
    const int null = -30000;
    
    void peak(int queue[], int frntInfo[]) {
        int i = 0;
        while (0==0) {
            if (queue[i] == null) {
                frntInfo[0] = queue[i-1];
                frntInfo[1] = i-1;
                return;
            }
            i++;
        }
    }
    
    
    void createQueue(int arr[], int arrSize) {
        if (arrSize == 0) {
            printf("Error: arrSize must be greater than 0");
        }
        for (int i=0; i < arrSize; i++) {
            arr[i] = null;
        }
    }
    
    
    bool isFull(int arr[], int arrSize) {
        if (arrSize == 0) {
            printf("Error: arrSize must be greater than 0");
        }
        for (int i=0; i < arrSize; i++) {
            int elem = arr[i];
            if (elem == null) {
                return false;
            }
        }
        return true;
    } 
    
    //Tests
    int queue[3];
    createQueue(queue, 3);
    printf("%d", isFull(queue, 3));
    return 0;
}