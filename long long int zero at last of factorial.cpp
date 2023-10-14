#include <iostream>

using namespace std;

// Function to calculate the number of trailing zeros in n!
int countTrailingZeros(int n) {
    int count = 0;
    while (n > 0) {
        n /= 5;
        count += n;
    }
    return count;
}

int main() {
    int num1;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "\n";

    int num2;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "\n";

    int num3;
    cout << "Enter number 3: ";
    cin >> num3;
    cout << "\n";

    int num4;
    cout << "Enter number 4: ";
    cin >> num4;
    cout << "\n\n";

    // Count the number of trailing zeros in factorial of n
    int zeros1 = countTrailingZeros(num1);
    int zeros2 = countTrailingZeros(num2);
    int zeros3 = countTrailingZeros(num3);
    int zeros4 = countTrailingZeros(num4);

    cout << "Number of zeros at the end of " << num1 << " is\t: " << zeros1 << endl;
    cout << "Number of zeros at the end of " << num2 << " is\t: " << zeros2 << endl;
    cout << "Number of zeros at the end of " << num3 << " is\t: " << zeros3 << endl;
    cout << "Number of zeros at the end of " << num4 << " is\t: " << zeros4 << endl;

    return 0;
}
