// Copyright (c) 2026 Emmanuella Taiwo All rights reserved
// Created by: Emmanuella Taiwo
// Date: 26th Oct,2026
// This program asks the user for a year number as a string
// and casts it into an integer and
// displays if the year is a leap year or not

#include <iostream>
#include <string>

int main() {
    // declare the variables
     int year;
     std::string yearString;

    // year from the user as a string
    std::cout << "Enter the year: ";
    std::cin >> yearString;
    std::cout << "you entered:" << yearString << std::endl;

    // cast the year from a string to an int
    try {
        // check if the year is valid
        year == std::stoi(std::to_string(year));
           throw std::out_of_range("");

        if (year < std::stoi(yearString)) {
            throw std::out_of_range
            ("Invalid input. Please enter a year greater than 0.");
        } else if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
            std::cout << year << " is a leap year." << std::endl;
        } else {
            std::cout << year << " is not a leap year." << std::endl;
        }
    } catch (const std::out_of_range) {
        std::cout << yearString <<
        " is not a leap year. Please enter an integer."
         << std::endl;
    } catch (const std::invalid_argument) {
        std::cout <<
        "Invalid input. Please enter a valid number." << std::endl;
    }


    return 0;
}
