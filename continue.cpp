// Copyright (c) 2020 Rohnin Barrette All rights reserved.
//
// Created by: Rohnin Barrette
// Created on: Sep 2021
// this program uses the continue comand

#include <iostream>
#include <string>

int main() {
    // this program uses the continue comand
    // inputted number.
    int loop_counter = 1;
    int sum_of_numbers = 0;
    std::string amount_string;
    int user_number;
    std::string user_string;
    int amount_number;

    // input
    std::cout << "" << std::endl;
    std::cout << "Enter the amount of numbers you would like to add: ";
    std::cin >> amount_string;
    std::cout << "" << std::endl;

    // process
    try {
        amount_number = std::stoi(amount_string);
        if (amount_string.find_first_of(".") != std::string::npos) {
            std::cout << "Invalid input" <<std:: endl;
        } else {
                for (loop_counter = 1; loop_counter <=
                    amount_number; loop_counter++) {
                    std::cout << "Enter a number: ";
                    std::cin >> user_string;
                    user_number = std::stoi(user_string);
                    if (user_number < 0) {
                        std::cout << "Invalid Input" << std::endl;
                        continue;
                    } else if (user_string.find_first_of(".") !=
                        std::string::npos) {
                        std::cout << "Invalid input" << std::endl;
                        continue;

                    } else {
                        sum_of_numbers = sum_of_numbers + user_number;
                        std::cout << "Thes sum of the positive numbers is "
                            << sum_of_numbers << std::endl;
                    }
                }
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input" << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
