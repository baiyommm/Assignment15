#include <iostream>
using namespace std;

int main() {
    
    int rows = 5; // Number of rows for the triangle
    
    for (int i = 1; i <= rows; i++) {
        // Print stars for the current row
        for (int j = 1; j <= i; j++) {
            // Nested for loop to print the stars (j)
            cout << "*";
        }
        // Next line
        cout << endl;
    }
    return 0;
}
