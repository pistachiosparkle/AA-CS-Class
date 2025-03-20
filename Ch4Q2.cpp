#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double weight, distance, rate, cost;
    // User enters the weight of the package
    cout << "Enter the weight of the package in kilograms. ";
    cin >> weight;
    // Input validation: make sure the values for weight are in the acceptable range
    if (weight <= 0 || weight > 20) {
        cout << "The weight must be between 0 and 20 kg." << endl;
        return 1;
    } 
    // User enters the shipping distance
    cout << "Enter the shipping distance in miles. ";
    cin >> distance;
    // Input validation: make suer the values for distance are in the acceptable range
    if (distance < 10 || distance > 3000) {
        cout << "The distance must be between 10 and 3000 miles." << endl;
        return 1;
    }
    // Determine rate per 500 miles
    if (weight <= 2) {
        rate = 1.10;
    } else if (weight <= 6) {
        rate = 2.20;
    } else if (weight <= 10) {
        rate = 3.70;
    } else {
        rate = 4.80;
    } 
    // Calculate total shipping cost
    cost = rate * (static_cast<int>((distance + 499) / 500));
    // Display the shipping charges
    cout << fixed << setprecision(2);
    cout << "Shipping cost: $" << cost << endl;
    return 0;