// Program to print a Sierpinski triangle
#include <iostream>
using namespace std;

void Sierpinski(int n);

int main() {
    int n = 32; // Size of the triangle
    Sierpinski(n); // Call it
    return 0;
}

// Sierpinski fractal generator
void Sierpinski(int n) {
    // Go through each row of the triangle, starting from the top
    for (int y = n - 1; y >= 0; y--) {
        // Create some space
        for (int i = 0; i < y; i++) {
            cout << " ";
        }

        // Go over each character in the current row
        for (int x = 0; x + y < n; x++) {
            // Using AND, check if x and y are common
            if ((x & y) != 0) {
                // If common, print two spaces
                cout << "  ";
            }
            // If they're not in common, print an asterisk and a space
            else {
                cout << "* ";
            }
        }

        // Move to the next row
        cout << endl;
    }

    // Some more space
    cout << string(2, '\n');
}
