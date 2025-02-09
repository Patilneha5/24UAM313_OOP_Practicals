#include <iostream>
using namespace std;

// Function declaration
void largestNumber(float num1, float num2, float num3);

int main() {
    float num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    largestNumber(num1, num2, num3);

    return 0;
}

// Function definition
void largestNumber(float num1, float num2, float num3) {
    if (num1 >= num2 && num1 >= num3) {
        cout << "The largest number is: " << num1 << endl;
    } else if (num2 >= num1 && num2 >= num3) {
        cout << "The largest number is: " << num2 << endl;
    } else {
        cout << "The largest number is: " << num3 << endl;
    }
}

