#include <iostream>
#include <vector>
using namespace std;

// Function to rotate an array to the left by 'd' positions
void leftRotate(vector<int>& arr, int d) {
    int n = arr.size();
    d %= n; // Handle cases where d is greater than the array size

    vector<int> rotated(n);

    for (int i = 0; i < n; i++) {
        int newIndex = (i - d + n) % n;
        rotated[newIndex] = arr[i];
    }

    arr = rotated; // Update the original array with the rotated elements
}

// Function to print an array
void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int n, d;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number of positions to rotate left: ";
    cin >> d;

    leftRotate(arr, d);

    cout << "Rotated array: ";
    printArray(arr);

    return 0;
}
