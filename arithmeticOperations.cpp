#include <iostream>
using namespace std;

int addition(int n1, int n2) {
    return n1 + n2;
}

int subtraction(int n1, int n2) {
    return n1 - n2;
}

int multiplication(int n1, int n2) {
    return n1 * n2;
}

int division(int n1, int n2) {
    if (n2 == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0;
    }
    return n1 / n2;
}

int main() {
    int num1, num2, choice;
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cout << "Enter Your Choice : "<<endl;
    cin >> choice;

    cout <<"Enter Any Two Numbers to Perform Operations: ";
    cin >> num1 >> num2;

    switch (choice) {
        case 1:
            cout << "ADDITION : " << addition(num1, num2) << endl;
            break;

        case 2:
            cout << "SUBTRACTION : " << subtraction(num1, num2) << endl;
            break;

        case 3:
            cout << "MULTIPLICATION : " << multiplication(num1, num2) << endl;
            break;

        case 4:
            cout << "DIVISION : " << division(num1, num2) << endl;
            break;

        default:
            cout << "Wrong Choice!" << endl;
            break;
    }
    return 0;
}

