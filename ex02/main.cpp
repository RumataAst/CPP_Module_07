#include "Array.hpp"
#include "Array.tpp"
#include <iostream>

int main() {
    try {
        // Create an empty array
        Array<int> emptyArray;
        std::cout << "Empty array size: " << emptyArray.size() << std::endl;

        // Create an array with 5 elements
        Array<int> numbers(5);
        for (unsigned int i = 0; i < numbers.size(); ++i) {
            numbers[i] = i * 10;  // Assign values
        }

        // Print the array
        std::cout << "Numbers array: ";
        for (unsigned int i = 0; i < numbers.size(); ++i) {
            std::cout << numbers[i] << " ";
        }
        std::cout << std::endl;

        // Copy constructor test
        Array<int> copiedArray = numbers;
        std::cout << "Copied array: ";
        for (unsigned int i = 0; i < copiedArray.size(); ++i) {
            std::cout << copiedArray[i] << " ";
        }
        std::cout << std::endl;

        // Assignment operator test
        Array<int> assignedArray;
        assignedArray = numbers;
        std::cout << "Assigned array: ";
        for (unsigned int i = 0; i < assignedArray.size(); ++i) {
            std::cout << assignedArray[i] << " ";
        }
        std::cout << std::endl;

        // Out-of-bounds access test
        std::cout << "Accessing out-of-bounds element: ";
        std::cout << numbers[10] << std::endl; // This should throw an exception

    } catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
