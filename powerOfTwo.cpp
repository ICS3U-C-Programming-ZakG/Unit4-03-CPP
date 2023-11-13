// Copyright (c) 2023 Zak Goneau All rights reserved.
//
// Created by: Zak Goneau
// Date Created: Nov. 13, 2023
// This program gets a number from the user and will
// calculate every numbered square until it reaches the user's number.

// include libraries
#include <iostream>
#include <string>
#include <cmath>

int main() {
    // introduce program to user
    std::cout << "This program gets a number from the user and will ";
    std::cout << "tell them the factorial of it.\n";

    // declare variables
    int userNumInt;
    float userFloat;
    int answerSquared = 0;
    std::string userNumStr;

    // get user input
    std::cout << "Please enter a positive integer: ";
    std::cin >> userNumStr;

    // try converting string input to integer
    try {
        userNumInt = std::stoi(userNumStr);

        // cast user input string to a float
        userFloat = std::stof(userNumStr);

        if (userNumInt != userFloat) {

            // tell user they cannot enter a decimal
            std::cout << "" << userFloat << " is not an integer\n";

            // check if user input is a negative
        } else if (userNumInt < 0) {

            // tell user if they inputted negative number
            std::cout << "" << userNumInt << " is an invalid input ";
            std::cout << "it must be a positive integer\n ";

        } else {

            // for loop, initialize counter, compare counter to user input and increment counter by 1
            for (int counter = 0; counter <= userNumInt; counter++) {

                // square counter and give value to answerSquared variable
                answerSquared = pow(counter, 2);

                // display every number squared to user number
                std::cout << "" << counter << "^2 = ";
                std::cout << answerSquared << std::endl;
            }
        }

        // catch invalid inputs and tell user
    } catch (std::invalid_argument) {
        std::cout << "" << userNumStr << " is not a positive integer.\n";
    }
}
