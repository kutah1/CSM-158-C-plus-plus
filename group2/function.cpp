#include <iostream>
#include <vector>

void myFunction(int iterations) {
    std::vector<int> data; // Create a vector to store the data

    for (int i = 0; i < iterations; ++i) {
        // Your code here
        int value;
        std::cout << "Enter a value for iteration " << i + 1 << ": ";
        std::cin >> value;
        data.push_back(value); // Store the value in the vector
    }

    // Print the stored data
    std::cout << "Stored data: ";
    for (int val : data) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

int main() {
    int numIterations;
    std::cout << "Enter the number of iterations: ";
    std::cin >> numIterations;

    myFunction(numIterations);

    return 0;
}
