#include <iostream>
using namespace std;

// Function to calculate the average of two float numbers
float calculateAverage(float num1, float num2) {
    return (num1 + num2) / 2.0;
}

int main() {
    //float a = 5.5, b = 7.5;

    // Call the function and store the result
    float average = calculateAverage(7.5, 2.5);

    // Output the result
    cout << "The average of " << "7.5"<< " and " << "2.5" << " is: " << average << endl;

    return 0;
}