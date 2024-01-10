#include <iostream>

// Function to calculate the Fibonacci series up to a given index
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    // Input: Enter the index for which you want to find the Fibonacci value
    int index;
    std::cout << "Enter the index in the Fibonacci series: ";
    std::cin >> index;

    // Output: Calculate and display the Fibonacci value at the given index
    if (index < 0) {
        std::cout << "Invalid index. Please enter a non-negative integer.\n";
    } else {
        int result = fibonacci(index);
        std::cout << "Fibonacci value at index " << index << ": " << result << std::endl;
    }

    return 0;
}

