#include <iostream>
using namespace std;
int main() {
    char shape;
    float var1;
    cout << "Name a shape (s for square; c for circle): " << endl;
    cin >> shape;

    if (shape == 's' || shape == 'S') {
        cout << "Enter length of the sides" << endl;
        cin >> var1;
        if (var1 < 0) {
            cout << "Please enter a positive number" << endl;
            return 1;
        } else {
            cout << "The area of the square is " << var1 * var1 << endl;
        }
    }
    else if (shape == 'c' || shape == 'C') {
        cout << "Enter radius of the circle" << endl;
        cin >> var1;
        if (var1 < 0) {
            cout << "Please enter a positive number" << endl;
            return 1;
        } else {
            cout << "The area of the circle is " << 3.14 * (var1 * var1) << endl;
        }
    }
    else {
        cout << "Please enter a valid shape" << endl;
        return 1;
    }
}