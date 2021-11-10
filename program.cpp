// Copyright (c) 2021 Igor All rights reserved
//
// Created by: Igor
// Created on: Nov 2021
// this program rounds numbers

#include <math.h>
#include <iostream>


float rounder(float &user_number_float, int numberOfDecimalPlaces) {
    // this function rounds numbers
    float answer;

    answer = ((user_number_float * (pow(10, numberOfDecimalPlaces))) + 0.5);
    answer = (static_cast<int>(answer));
    answer = (answer / (pow(10, numberOfDecimalPlaces)));

    return answer;
}

int main() {
    // this is main function

    std::string integer1;
    std::string integer2;
    float number;
    float answer;
    int numberOfDecimalPlaces;
    float user_number_float;

    // input
    std::cout << "Enter the number you want to round: ";
    std::cin >> integer1;
    std::cout << "Enter how many decimal places you want round by: ";
    std::cin >> integer2;

    try {
        number =  stof(integer1);
        numberOfDecimalPlaces = stoi(integer2);

        if (numberOfDecimalPlaces < 0) {
            std::cout
                << "Invalid input" << std::endl;
        } else {
            answer = rounder(number, numberOfDecimalPlaces);
            std::cout << "" << std::endl;
            std::cout << "The rounded number is " << answer << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "" << std::endl;
        std::cout << "Invalid input" << std::endl;
    }

    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
