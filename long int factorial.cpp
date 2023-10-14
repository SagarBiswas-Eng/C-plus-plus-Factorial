#include <iostream>
#include <cstdint>

using namespace std;

// Function to calculate factorial recursively
uint64_t factorial(uint64_t n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    uint64_t n = 100;
    uint64_t result = factorial(n);
    cout << "Factorial of " << n << " is: " << result << endl;
    return 0;
}


/// Note: The uint64_t data type is used to store large factorial values, as the factorial of 100 is a very large number that exceeds the range of int or long int data types.
