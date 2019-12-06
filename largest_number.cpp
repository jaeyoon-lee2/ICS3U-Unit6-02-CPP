// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Jaeyoon (Jay) Lee
// Created on: Dec 2019
// This program shows the largest number in 10 random numbers

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <array>


template<size_t N>
int FindLargestNumber(std::array<int, N> randomNumbers) {
    // this function find the largest number in list

    int largestNumber = randomNumbers[0];

    for (int counter = 1; counter < randomNumbers.size(); counter++) {
        if (largestNumber < randomNumbers[counter]) {
            largestNumber = randomNumbers[counter];
        }
    }

    return largestNumber;
}

main() {
    // this function shows the largest number in 10 random numbers

    std::array<int, 10> randomNumbers;
    int aNumber = 0;
    int largestNumber = 0;

    srand((unsigned int)time(NULL));

    // input
    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        aNumber = (rand() % 100) + 1;
        randomNumbers[loop_counter] = aNumber;
    }
    std::cout << " " << std::endl;

    largestNumber = FindLargestNumber(randomNumbers);

    std::cout << "The largest_number is: " << largestNumber << std::endl;
}
