#include <iostream>
using namespace std;

// Function to print the Fibonacci sequence
void fibonacci(int n) {
    // First two terms are always 0 and 1
    int a = 0, b = 1;
    
    // Print the first term
    cout << "Fibonacci sequence: ";
    
    // Print the first term if n is greater than 0
    if (n > 0) {
        cout << a << " ";
    }
    
    // Print the second term if n is greater than 1
    if (n > 1) {
        cout << b << " ";
    }

    // Calculate and print the rest of the Fibonacci sequence
    for (int i = 2; i < n; i++) {
        int next = a + b;  // next term in Fibonacci sequence
        cout << next << " ";  // Print the next term
        
        // Update a and b for the next iteration
        a = b;
        b = next;
    }

    cout << endl;  // New line after printing the sequence
}

int main() {
    int number;
    
    // Ask the user to enter the number of terms in the Fibonacci sequence
    cout << "Enter the number of terms in the Fibonacci sequence: ";
    cin >> number;
    
    // Call the fibonacci function to print the sequence
    fibonacci(number);
    
    return 0; // End of program
}
