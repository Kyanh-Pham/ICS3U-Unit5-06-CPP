// Copyright (c) 2023 Kyanh Pham
//
// Created by: Kyanh Pham
// Created on: Jan 2023
// This program passes by reference and round a number

#include <cmath>
#include <iostream>
#include <string>


float roundOffNumber(float &decimalNumber, int &decimalPlaces) {
    // This function rounds numbers
    float roundedOff;
    int tempInt;

    // pow() is a power function
    roundedOff = decimalNumber * pow(10, decimalPlaces);
    roundedOff = (roundedOff + 0.5);
    // static_cast converts ints and floats
    roundedOff = static_cast<int>(roundedOff);
    roundedOff = roundedOff / pow(10, decimalPlaces);

    decimalNumber = roundedOff;
}


int main() {
    std::string userNumberString;
    std::string decimalPlacesString;
    int decimalPlaces;
    float userNumber;
    float roundedNumber;

    std::cout << "Enter the number you want to round: ";
    std::cin >> userNumberString;
    std::cout << "" << std::endl;
    std::cout << "Enter the decimal places you want to round by: ";
    std::cin >> decimalPlacesString;
    std::cout << "" << std::endl;

    try {
        userNumber = std::stof(userNumberString);
        decimalPlaces = std::stoi(decimalPlacesString);

        roundOffNumber(userNumber, decimalPlaces);

        std::cout << "The rounded number is " << userNumber << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
