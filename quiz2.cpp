#include <iostream>
using namespace std;
int findMinimum(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    const int size = 100;
    int array[size];
    
    cout << "Enter " << size << " elements for the array:" << endl;
    for (int i = 0; i < size; ++i) {
       cout << "Element " << i + 1 << ": ";
      cin >> array[i];
    }
    
    int minNum = findMinimum(array, size);
    
cout << "Minimum value in the array is: " << minNum <<endl;
    
    return 0;
}

