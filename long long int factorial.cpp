#include <iostream>
#include <vector>

using namespace std;

// Function to multiply an array of digits with a number
void multiply(vector<int>& digits, int num) {
    int carry = 0;
    for (int i = 0; i < digits.size(); ++i) {
        int product = digits[i] * num + carry;
        digits[i] = product % 10;
        carry = product / 10;
    }
    while (carry > 0) {
        digits.push_back(carry % 10);
        carry /= 10;
    }
}

// Function to calculate factorial iteratively
vector<int> factorial(int n) {
    vector<int> result;
    result.push_back(1);
    for (int i = 2; i <= n; ++i) {
        multiply(result, i);
    }
    return result;
}

int main() {
    int n = 100;
    vector<int> result = factorial(n);

    cout << "Factorial of " << n << " is: ";
    for (int i = result.size() - 1; i >= 0; --i) {
        cout << result[i];
    }
    cout << endl;

    return 0;
}
