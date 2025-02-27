#include <iostream>
using namespace std;
//Problem #1
int main(){
    //defining the varaibles
    const double riseperyear = 1.5;
    const int years = 5;
    double oceanlevelrise = riseperyear * years;
    //display result
    cout << "The ocean's level will be" << oceanlevelrise << "millimeters higher than the current level in" << years << "years" << endl; 
    return 0;
}
int main(){
    //defining the varaibles
    const double riseperyear = 1.5;
    const int years = 7;
    double oceanlevelrise = riseperyear * years;
    //display result
    cout << "The ocean's level will be" << oceanlevelrise << "millimeters higher than the current level in" << years << "years" << endl; 
    return 0;
}
int main(){
    //defining the variables
    const double riseperyear = 1.5;
    const int years = 10;
    double oceanlevelrise = riseperyear * years;
    //display result
    cout << "The ocean's level will be" << oceanlevelrise << "millimeters higher than the current level in" << years << "years" << endl; 
    return 0;
}


//Problem #2
int main() {
    //define tank size
    const double tanksize = 20.0
    //define the different fuel efficiencies
    const double mpgtown = 23.5;
    const double mpghighway = 28.9;
    //calculate the distance the car can travel
    double towndistance = tanksize * mpgtown;
    double highwaydistance = tanksize * mpghighway;
    //display results
    cout << "The car can travel " << towndistance << "miles on a full tank when driven in town." << endl;
    cout << "The care can travel " << highwaydistance << " miles on a full tank when driven on the highway." << endl;
    return 0;
}


//Problem #3
//define the variables
int main() {
int totalcustomers = 16500;
double purchasepercentage = 0.15;
double citrusprefpercent = 0.58;
//number of customers that purchase energy drinks per week
int customerspurchasinged = totalcustomers * purchasepercentage;
//number of customers who prefer citrus energy drinks
int customersprefcitrus = customerspurchasinged * citrusprefpercent;
//display results
cout << "The number of customers purchasing one or more energy drinks per week is about " << customerspurchasinged << endl;
cout << "The number of customers preferring citrus-flavored energy drinks is about " << customersprefcitrus << endl;
return 0;
}