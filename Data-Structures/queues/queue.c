#include<stdio.h>
#include<stdbool.h>


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
    
    
    bool isFull(int arr[]) {
        int arrSize = sizeof(arr) / sizeof(arr[0]);
        for (int i=0; i < arrSize; i++) {
            int elem = arr[i];
            if (elem == null) {
                return false;
            }
        }
        return true;
    }
    
    
    bool isEmpty(int arr[]) {
        int arrSize = sizeof(arr) / sizeof(arr[0]);
        for (int i=0; i < arrSize; i++) {
            int elem = arr[i];
            if (elem != null) {
                return false;
            }
        }
        return true;
    }
    
    
    void enqueue(int arr[], int val) {
        if (isFull(arr)) {
            printf("Error: the queue is already full");
            return;
        }
        if (isEmpty(arr)) {
            arr[0] = val;
            return;
        }
        //Find front element's index
        int arrInfo[2];
        peak(arr, arrInfo);
        int frontIndex = arrInfo[1];
        
        for (int i=frontIndex; i >= 0; i--) {
            arr[i+1] = arr[i];
        }
        arr[0] = val;
    }
    
    //Tests
    int queue[3];
    createQueue(queue, 3);
    enqueue(queue, 1);
    enqueue(queue, 2);
    return 0;
}