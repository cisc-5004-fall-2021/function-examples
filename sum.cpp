#include <iostream>

using namespace std;

/*
 * Compute the sum of all elements in an array of integers.
 * 
 * int arr[]: The array to compute the sum over
 *            NOTE: This parameter could also be written "const int *arr".
 *            Because the parameter is defined to point to a constant int,
 *            we cannot change any value in the array.
 * int size: The number of elements in the array
 * Returns the sum of every element in the array.
 */
int sum(const int *arr, int size) {
    int total = 0;

    for (int i = 0; i < size; i++) {
        total = total + arr[i];

        // Alternative option:
        // total = *(arr+i);
    }

    return total;
}

/*
 * Compute the absolute value over an array of integers.
 * This function alters the variable in place.
 * 
 * int arr[]: The array to compute the absolute value over
 *            NOTE: This parameter could also be written "int *arr"
 * int size: The number of elements in the array
 */
void absoluteValue(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            // arr[] is a pointer to the start of the array.
            // Changing its value here also changes it for the caller.
            arr[i] = -arr[i];

            // Alternative option:
            // *(arr+i) = -*(arr+i);
        }
    }
}

/*
 * Utility function to print out an array.
 *
 * int arr[]: The array to compute the absolute value over
 *            NOTE: This parameter could also be written "const int *arr"
 * int size: The number of elements in the array
 */
void printArray(const int arr[], int size) {
    cout << "[ ";

    for(int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size-1) {
            cout << ", ";
        }
    }

    cout << "] " << endl;
}

int main() {
    int myArr[] = {3, 3, 25, 8, 13, -54};
    cout << "Sum: " << sum(myArr, 6) << endl;

    cout << "Before absolute value: ";
    printArray(myArr, 6);

    absoluteValue(myArr, 6);

    cout << "After absolute value: ";
    printArray(myArr, 6);
}