#include <stdio.h>
void BinarySearch(int arr[],int item,int low, int high){
    while (low<=high)
    {
        int mid = (low + high)/2;
        if (item == arr[mid])
        {
            return mid+1;
        }
        else if (item > arr[mid] )
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }

    }
    return low;
}
void InsertionShorting(int arr[], int n){
    int i, j, key, loc;

    for (i = 1; i < n; i++) {
        key = arr[i];
        loc = binarySearch(arr, key, 0, i - 1);
        j = i - 1;
        while (j >= loc) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    InsertionShorting(arr, n);
    printArray(arr, n);
    return 0;
}
