//Chapter 5, Program 2
#include <iostream>
#include <fstream>
#include <string>
#include <limits>
int main() {
    std::ifstream inputFile("LineUp.txt");
    if (!inputFile) {
        std::cerr << "Error opening file" << std::endl;
        return 1;
    }
    std::string name;
    std::string firstName, lastName;
    int count = 0;
    firstName = std::string(std::numeric_limits<std::streamsize>::max(), 'z');
    lastName = "";
    while (inputFile >> name) {
        if (name < firstName) {
            firstName = name;
        }
        if (name > lastName) {
            lastName = name;
        }
        count++;
    }
    inputFile.close();
    if (count == 0) {
        std::cout << "No students in the file." << std::endl;
    } else {
        std::cout << "Number of students: " << count << std::endl;
        std::cout << "First in line: " << firstName << std::endl;
        std::cout << "Last in line: " << lastName << std::endl;
    }
    return 0;
}
