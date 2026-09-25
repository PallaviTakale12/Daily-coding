#include <iostream>
using namespace std;


long long calculateFactorial(int n) {
    if (n < 0) return -1; 
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    long long result = calculateFactorial(num);
    if (result == -1) {
        cout << "Factorial of a negative number doesn't exist." << endl;
    } else {
        cout << "Factorial of " << num << " is: " << result << endl;
    }
    return 0;
}

