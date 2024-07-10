#include <iostream>
using namespace std;

void merge(int *arr, int low, int high, int mid){

    int n1 = mid - low + 1;
    int n2 = high - mid;

    int left[n1], right[n2];


    for(int i = 0; i < n1; i++)
        left[i] = arr[low + i];
    for(int j = 0; j < n2; j++)
        right[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = low;
    while(i < n1 && j < n2) {
        if(left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while(i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }


    while(j < n2) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int *arr, int low, int high){
    if(low < high) {
        int mid = (low + high) / 2;

   
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        merge(arr, low, high, mid);
    }
}

int main() {
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    if(n > 0) {
        int arr[n];
        cout << "Enter the elements:\n";
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cout << "Given array is\n";
        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        mergeSort(arr, 0, n - 1);

        cout << "The sorted array is\n";
        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Invalid array size" << endl;
    }

    return 0;
}
