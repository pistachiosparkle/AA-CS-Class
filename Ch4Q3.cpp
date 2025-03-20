#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int choice;
    do {
        // display the menu
        cout << "Geometry Calculator" << endl;
        cout << "1. Calculate the Area of a Circle" << endl;
        cout << "2. Calculate the Area of a Rectangle" << endl;
        cout << "3. Calculate the Area of a Triangle" << endl;
        cout << "4. Quit" << endl;
        cout << "What do you want to do? (enter 1-4) ";
        cin >> choice;
        if (choice < 1 || choice > 4) {
            cout << "The only valid options are 1-4." << endl;
            continue;
        }
        switch (choice) {
            case 1: {
                // calculate the area of a circle
                double radius;
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                if (radius < 0) {
                    cout << "Radius cannot be negative." << endl;
                } else {
                    double area = 3.14159 * radius * radius;
                    cout << "The area of the circle is: " << fixed << setprecision(2) << area << endl;
                }
                break;
            }
            case 2: {
                // calculate the area of a rectangle
                double length, width;
                cout << "Enter the length: ";
                cin >> length;
                cout << "Enter the width: ";
                cin >> width;
                if (length < 0 || width < 0) {
                    cout << "Length and width cannot be negative." << endl;
                } else {
                    double area = length * width;
                    cout << "The area of the rectangle is: " << fixed << setprecision(2) << area << endl;
                }
                break;
            }
            case 3: {
                // find the area of a triangle
                double base, height;
                cout << "Enter the base: ";
                cin >> base;
                cout << "Enter the height: ";
                cin >> height;
                if (base < 0 || height < 0) {
                    cout << "Base and height cannot be negative." << endl;
                } else {
                    double area = 0.5 * base * height;
                    cout << "The area of the triangle is: " << fixed << setprecision(2) << area << endl;
                }
                break;
            }
            case 4:
                cout << "Bye!" << endl;
                break;
        }
    } while (choice != 4);
    return 0;
}
