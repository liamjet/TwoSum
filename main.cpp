#include <iostream>
#include <unordered_set>

// Problem:
// Given an array of integers and a value, determine if there are any two integers in the array whose sum is equal to the given value​

bool find_Pair(int arr[], int size, int num) {
	std::unordered_set <int> found;
	for (int i = 0; i < size; i++) {
		if (found.find(num - arr[i]) != found.end()) {
			return true;
		}
		found.insert(arr[i]);
	}
	return false;
}



int main() {

	int arr[6] = { 0,1,2,3,4,5 };
	int num = 100;
	
	bool found_Pair = false;
	found_Pair = find_Pair(arr, 6, num);

	if ( found_Pair == true) {
		std::cout << "Found!";
	}
	else {
		std::cout << "Not Found!";
	}

	return 0;
}