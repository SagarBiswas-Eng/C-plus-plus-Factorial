#include<iostream>
using namespace std;

class Recursion {

public:
    Recursion() {};

    unsigned long long fact(int n) {
        if(n == 0 || n == 1) {
            return 1;
        }else{
            return (n*fact(n-1));
        }
    }
};


int main() {
    Recursion r1;
    int num;
    cout << "Enter the number: ";
    cin >>num;
    unsigned long long result = r1.fact(num);
    cout << "Factorial of " << num << " is: " << result << endl;

    return 0;
}

