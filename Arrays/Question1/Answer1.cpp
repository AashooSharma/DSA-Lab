#include <iostream>
#include <vector>
using namespace std;

// Function to display the array
void displayArray(const vector<int>& arr) {
    cout << "Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

// Function to insert an element at a given position
void insertElement(vector<int>& arr, int value, int position) {
    if (position < 1 || position > arr.size() + 1) {
        cout << "Invalid position for insertion." << endl;
        return;
    }
    arr.insert(arr.begin() + position - 1, value);
    cout << "Element inserted successfully." << endl;
}

// Function to delete an element from a given position
void deleteElement(vector<int>& arr, int position) {
    if (position < 1 || position > arr.size()) {
        cout << "Invalid position for deletion." << endl;
        return;
    }
    arr.erase(arr.begin() + position - 1);
    cout << "Element deleted successfully." << endl;
}

// Function to search for an element in the array
void searchElement(const vector<int>& arr, int value) {
    for (size_t i = 0; i < arr.size(); i++) {
        if (arr[i] == value) {
            cout << "Element " << value << " found at position " << i + 1 << "." << endl;
            return;
        }
    }
    cout << "Element " << value << " not found in the array." << endl;
}

int main() {
    vector<int> arr = {10, 20, 30, 40};
    cout << "Initial ";
    displayArray(arr);

    // Insert operation
    int insertValue = 25, insertPosition = 2;
    insertElement(arr, insertValue, insertPosition);
    cout << "After insertion ";
    displayArray(arr);

    // Delete operation
    int deletePosition = 3;
    deleteElement(arr, deletePosition);
    cout << "After deletion ";
    displayArray(arr);

    // Search operation
    int searchValue = 40;
    searchElement(arr, searchValue);

    return 0;
}
