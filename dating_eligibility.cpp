// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Douglass Jeffrey
// Created on: Oct 2019
// This program determines if you are of the right age to date a grandmothers
// granddaughter

#include <iostream>

main() {
    // variables
    int age;

    // input
    std::cout << "Input your age:" << std::endl;
    std::cin >> age;

    // process
    try {
        if (age > 25 && age < 40) {
            // output
            std::cout << "You are a suitable fit for my granddaughter!!";
        } else {
            std::cout << "You are not good enough for my granddaughter!!";
        }
    } catch (std::invalid_argument) {
        std::cout << "Please input a proper age";
    }
}
