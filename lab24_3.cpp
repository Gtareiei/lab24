#include <iostream>
#include <set>
using namespace std;

int count(int arr[], int size) {
    set<int> unique_numbers(arr, arr + size); 
    return unique_numbers.size(); 
}

