// Copyright (c) 2022 Peter Sobowale All rights reserved.
//
// Created by:
// This program asks the user for a random number from
// 0 to 9 and checks if it is the correct number
#include <iostream>


int main() {
    // declare constants
    const int CORRECT_NUMBER = 9;

    // declare variables
    int randomNumber;

    // get random number
    std::cout << "Enter a number from 0 to 9: ";
    std::cin >> randomNumber;

    // if randomNumber == CORRECT_NUMBER
    if (randomNumber == CORRECT_NUMBER) {
        std::cout << "You guessed correctly!";
    }

    // if randomNumber <> CORRECT_NUMBER
    if (randomNumber != CORRECT_NUMBER) {
        std::cout << "You guessed wrong :(";
    }
}
