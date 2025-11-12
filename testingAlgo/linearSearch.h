// linearSearch.h 

#include <vector>
#include <random>

using std::vector;


int linearSearch(const vector<int>& arr, int target=0){
    for (std::size_t i = 0; i < arr.size(); i++){
        if (arr[i] == target){
            return i;
        }
    };
    return -2;
}