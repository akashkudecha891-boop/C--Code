#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int start = 0, end = size - 1;

    while(start <= end) {
        int mid = (start + end) / 2;

        if(arr[mid] == target)
            return mid;
        else if(arr[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }

    return -1;
}

int main() {
    int arr[5] = {1,2,3,4,5};

    cout << binarySearch(arr,5,4);

    return 0;
}
