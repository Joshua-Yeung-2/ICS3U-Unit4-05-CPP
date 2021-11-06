// copyright (c) 2020 Joshua Yeung All rights reserved

// Created by: Joshua Yeung
// Created on October 2021
// This program is to test the continue statement

#include <iostream>
#include <string>

int main() {
    // this function is to test the continue statement.
    int loopCounter = 0;
    int addAnswer = 0;
    std::string userNumberStr;
    int userNumber;
    std::string addNumberStr;
    int addNumber;

    // input
    std::cout << "please enter a positive number" << std::endl;
    std::cout << "Enter how many number that you would like to add together: ";
    std::cin >> userNumberStr;
    std::cout << "" << std::endl;
    // process & output
    try {
        userNumber = std::stoi(userNumberStr);
        while (loopCounter < userNumber) {
            std::cout << "now enter the number you want to add: ";
            std::cin >> addNumberStr;
            addNumber = std::stoi(addNumberStr);
            if (addNumber < 0) {
                continue;
            }
            addAnswer = addAnswer + addNumber;
            loopCounter = loopCounter + 1;
        }
        std::cout << "The sum of the number you" <<
        "have enter is " << addAnswer << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid integer" << std::endl;
    }
    std::cout << "\nDone" << std::endl;
}
