//1.1.Write and application that reads five integers from the user and determines and prints the largest
//and the smallest integers number.Use only the programming techniques your learned in this chapter.
//Justin Motyl
#include <iostream>
using namespace std;

int main() {
    int integer1, integer2, integer3, integer4, integer5; // Declare five integer variables
    int higher, lower;                                   // Variables to store the higher and lower numbers

    // User input
    cout << "Enter five integers (separate using spaces): ";
    cin >> integer1 >> integer2 >> integer3 >> integer4 >> integer5;

    higher = integer1;
    lower = integer1;

    // Compare the second integer with the current higher and lower
    if (integer2 > higher) {
        higher = integer2;  
    }
    if (integer2 < lower) {
        lower = integer2; 
    }

    // Compare the third integer with the current higher and lower
    if (integer3 > higher) {
        higher = integer3; 
    }
    if (integer3 < lower) {
        lower = integer3; 
    }

    // Compare the fourth integer with the current higher and lower
    if (integer4 > higher) {
        higher = integer4;  
    }
    if (integer4 < lower) {
        lower = integer4; 
    }

    // Compare the fifth integer with the current higher and lower
    if (integer5 > higher) {
        higher = integer5;  
    }
    if (integer5 < lower) {
        lower = integer5; 
    }

    // Print the higher and lower integers
    cout << "The higher number is: " << higher << endl;
    cout << "The lower number is: " << lower << endl;

    return 0;
}