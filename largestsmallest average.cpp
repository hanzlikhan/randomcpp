#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int number, largest, smallest, sum = 0;

    cout << "Enter " << n << " whole numbers:" << endl;

    // Read the first number and initialize largest and smallest with it
    cin >> number;
    largest = smallest = number;
    sum += number;

    // Read the rest of the numbers and update largest, smallest, and sum
    for (int i = 1; i < n; ++i) {
        cin >> number;
        sum += number;

        if (number > largest) {
            largest = number;
        } else if (number < smallest) {
            smallest = number;
        }
    }

    double average = static_cast<double>(sum) / n;

    cout << "Largest number: " << largest << endl;
    cout << "Smallest number: " << smallest << endl;
    cout << "Average: " << average << endl;

    return 0;
}

