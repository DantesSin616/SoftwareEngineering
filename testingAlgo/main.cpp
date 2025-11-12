
#include "getRandomArray.h"
#include "linearSearch.h"


int main() {

    const int min_value = 1;
    const int max_value = 1000;
    const int arr_size = 500; 

    std::cout<< linearSearch(generateRandomArr(arr_size, min_value, max_value), 10) << std::endl;
}