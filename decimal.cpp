// Copyright (c) 2021 Lucas LeBlanc All rights reserved

// Created by: Lucas LeBlanc
// Created on: Jan 2023
// This program rounds numbers

#include <iostream>
#include <string>

float DecimalRounding(int Decimal, float UserNumber) {
    // This function rounds numbers
    float answer;

    answer = UserNumber * (10 * (Decimal * Decimal));
    answer = static_cast<int>(answer + 0.5);
    answer = answer / (10 * (Decimal * Decimal));

    UserNumber = answer;
}

int main() {
    std::string NumberFromUser;
    std::string DecimalFromUser;
    int DecimalReal;
    float UserNumberReal;
    float FinalAnswer;

    std::cout << "Enter the number you want to round: ";
    std::cin >> NumberFromUser;
    std::cout << "" << std::endl;
    std::cout << "Enter the decimal places you want to round by: ";
    std::cin >> DecimalFromUser;
    std::cout << "" << std::endl;

    try {
        UserNumberReal = std::stof(NumberFromUser);
        DecimalReal = std::stoi(DecimalFromUser);

        FinalAnswer = DecimalRounding(DecimalReal, UserNumberReal);

        std::cout << "The rounded number is " << FinalAnswer << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
