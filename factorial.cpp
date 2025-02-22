#include <iostream>
using namespace std;

// Function to calculate the factorial of a number
int factorial(int n) {
    // Base case: if n is 0 or 1, return 1 because 0! = 1! = 1
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        // Recursive case: multiply n by factorial of n-1
        return n * factorial(n - 1);
    }
}

int main() {
    int number;
    
    // Ask the user to enter a number
    cout << "Enter a number: ";
    cin >> number;
    
    // Call the factorial function and store the result
    int result = factorial(number);
    
    // Output the result to the user
    cout << "The factorial of " << number << " is " << result << endl;
    
    return 0; // End of program
}
v
