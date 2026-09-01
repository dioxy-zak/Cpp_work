#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "============================\n";
    cout << "   C++ TEST PROGRAM\n";
    cout << "============================\n\n";

    string name;
    int age;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cout << "\nHello, " << name << "!\n";
    cout << "You are " << age << " years old.\n";

    // Test calculation
    int a = 10;
    int b = 5;

    cout << "\nTesting calculations:\n";
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl;

    cout << "\nC++ is working correctly! ✅\n";

    return 0;
}