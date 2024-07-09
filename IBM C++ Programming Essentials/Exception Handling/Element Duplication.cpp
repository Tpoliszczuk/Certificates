#include <iostream>
#include <exception>
#include <vector>
using namespace std;

void elementDuplication() {
    int size;
    cout << "Enter the size of an array" << endl;
    cin >> size;

    if (size <= 0) {
        throw runtime_error("Array size must be greater than 0");
    }

    vector<int> arr(size);
    cout << "Enter the array elements" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int index;
    cout << "Enter the index position of the element in the array to be replicated" << endl;
    cin >> index;

    if (index < 0 || index >= size) {
        throw runtime_error("Array index is out of range");
    }

    // Replace the last element in the array with the element at the given index
    arr[size - 1] = arr[index];

    // Print the updated array
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int main() {
    try {
        elementDuplication();
    } catch (const exception &e) {
        cerr << e.what() << endl;
    }
    return 0;
}
