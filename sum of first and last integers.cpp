#include <iostream>
using namespace std;

        // QUESTION (3) THREE

// Function to calculate the sum of all integers between first and last (inclusive)
int sum_from_to(int first, int last) {
    int sum = 0;
    for(int i = first; i <= last; i++) {
        sum += i;
    }
    return sum;
}

// Helper function to find the greatest common divisor (GCD)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to reduce a fraction by dividing num and denom by their GCD
int reduce(int &num, int &denom) {
    if (num <= 0 || denom <= 0) {
        return 0;
    }

    int divisor = gcd(num, denom);
    num /= divisor;
    denom /= divisor;

    return 1;
}

int main() {

    int sum = sum_from_to(4, 9);
    cout << "_________________________________________________________________\n";
    cout << "The Sum between first and last integers : " << sum <<"\n";
    cout << "_________________________________________________________________\n";

    int numerator = 5, denominator = 25;
    int result = reduce(numerator, denominator);
    if (result == 1) {
            cout << "_________________________________________________________________\n";
            cout << " The Reduced fraction : " << numerator << "/" << denominator << "\n";  // Output: 2/3
            cout << "_________________________________________________________________\n";
    } else {
            cout << "_________________________________________________________________\n";
            cout << "Failed to reduce the fraction." << "\n";
            cout << "_________________________________________________________________\n";
    }

    return 0;
}
