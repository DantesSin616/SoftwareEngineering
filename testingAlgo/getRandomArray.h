// getRandomArray.h

#include <iostream>
#include <random>
#include <vector>


std::vector<int> generateRandomArr(int size, int minVal, int maxVal){
    std::vector<int> randomArray; 

    if (size <= 0 || minVal > maxVal) {
        return randomArray; // returns an empty array as error -1 invalid size
    }

    std::random_device rd; // this is a way to seed? 
    std::mt19937 generator(rd()); // seed the engine? 

    std::uniform_int_distribution<> distribution(minVal, maxVal);

    // populate the array
    for(int i = 0; i < size; i++){
        // generate random numbers within the defined range and add it to the vector 
        randomArray.push_back(distribution(generator));
    }
    return randomArray;
}