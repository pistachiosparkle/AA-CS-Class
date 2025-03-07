#include <iostream>
#include <iomanip>
using namespace std

//Problem 1

int main() {
    //defining the constants
    const int standard_batch_size = 48;
    const double sugar48batch = 1.5;
    const double butter48batch = 1.0;
    const double flour48batch = 2.75;

    //formulas to adjust ingredients based on user-desired batch size
    double usersugar = (sugar48batch / standard_batch_size) * user_cookies;
    double userbutter = (butter48batch / standard_batch_size) * user_cookies;
    double userflour = (flour48batch / standard_batch_size) * user_cookies;

    //user input
    int user_cookies;
    cout << "How many cookies would you like to make?";
    cin >> user_cookies;

    //display answer
    cout << fixed << setprecision(2);
    cout << "You will need " << usersugar << " cups of sugar, " << userbutter << " cups of butter, and " << userflour << " cups of flour\n";

    return 0
}



//Problem 2
#include <iostream>
#include <random>
#include <string>
using namespace std;

//generating the random numbers for the math problem
int main() {
    std::random_device rd; //seed generator
    std::mt19937 gen(rd()); //random number engine
    std::uniform_int_distribution<> dist(100,999); //define range of random numbers
    int num1 = dist(gen);
    int num2 = dist (gen);
    //display the problem 
    std::cout << " " << num1 << "\n";
    std::cout << "+" << num2 << "\n";
    std::cout << "_________\n";
    //pause for user
    std::cout << "Press Enter to check your answer.";
    //wait for user to press enter
    std::cin.get();
    //display answer
    std::cout << (num1 + num2) << "\n";

    return 0;
}



//Problem 3
#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    double principal, rate, 

    //user input
    cout << "What is the principal amount? ";
    cin >> principal;
    cout << "What is the interest rate?";
    cin >> rate;
    cout << "How many times is this interest compounded yearly?";
    cin >> times_compounded;

    //enter the given formula
    savings = principal * pow(1 + (rate / times_compounded), times_compounded)

}