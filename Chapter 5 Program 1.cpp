//Chapter 5, Program 1: Population
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int startPopulation, days;
    double dailyIncrease;
    do {
        cout << "Enter the starting number of organisms (minimum 2): ";
        cin >> startPopulation;
        if (startPopulation < 2) {
            cout << "Error: Starting population must be at least 2.\n";
        }
    } while (startPopulation < 2);
    do {
        cout << "Enter the average daily population increase (as a percentage, non-negative): ";
        cin >> dailyIncrease;
        if (dailyIncrease < 0) {
            cout << "Error: Daily population increase cannot be negative.\n";
        }
    } while (dailyIncrease < 0);
    do {
        cout << "Enter the number of days the organisms will multiply (minimum 1): ";
        cin >> days;
        if (days < 1) {
            cout << "Error: Number of days must be at least 1.\n";
        }
    } while (days < 1);
    dailyIncrease = dailyIncrease / 100.0;
    cout << "\nDay\tPopulation" << endl;
    cout << "-------------------" << endl;
    cout << "1\t" << startPopulation << endl;
    double population = startPopulation;
    for (int day = 2; day <= days; day++) {
        population += population * dailyIncrease; // Increase population
        cout << day << "\t" << fixed << setprecision(2) << population << endl;
    }
    return 0;
}
