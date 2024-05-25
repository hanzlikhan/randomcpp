#include <iostream>

int main() {
    const int size = 10;
    int arr[size];

    // Input values to initialize the array
    std::cout << "Enter " << size << " numbers to initialize the array:\n";
    for (int i = 0; i < size; i++) {
        std::cout << "Number " << (i + 1) << ": ";
        std::cin >> arr[i];
    }

    // Input the value to search for
    int searchValue;
    std::cout << "Enter the number you want to search for: ";
    std::cin >> searchValue;

    // Search for the number in the array
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (arr[i] == searchValue) {
            found = true;
            break;
        }
    }

    // Display the result
    if (found) {
        std::cout << "The number " << searchValue << " was found in the array." << std::endl;
    } else {
        std::cout << "The number " << searchValue << " was not found in the array." << std::endl;
    }

    return 0;
}

