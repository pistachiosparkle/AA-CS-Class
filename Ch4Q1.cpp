//Ch 4, Project 1: Days in a Month
#include <iostream>
using namespace std;
int main() {
    //user enters the month they want to learn about
    cout << "Enter a month (1-12) ";
    cin >> month;
    //input validation: make sure the month is between 1 and 12
    if (month < 1 || month > 12){
        cout << "That number is invalid. Only numbers 1 through 12 may be used." << endl;
        return 1;
    }
    cout << "Enter year";
    cin >> year;
     // Determine if the year is a leap year
     bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
     int days;
     // Determine the number of days in the month
     switch (month) {
         case 4: case 6: case 9: case 11:
             days = 30;
             break;
         case 2:
             days = isLeapYear ? 29 : 28;
             break;
         default:
             days = 31;
     }
     // Output the result
     cout << days << " days" << endl;
     return 0;
 }
}