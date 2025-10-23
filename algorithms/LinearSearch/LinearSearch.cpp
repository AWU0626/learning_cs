#include <iostream>
#include <vector>
#include <cstdlib>
#include "LinearSearch.h"

using namespace std;

int main() {
	int target = 10;
	vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9};

	int result = LinearSearch(arr, target);
	cout << "static result at index: " << result << endl;

	return 0;
}

int LinearSearch(vector<int>& arr, int target) {
	for (int i = 0; i < arr.size(); i++) {
		// return index if the array if found
		if (arr[i] == target) return i;
	}

	// return -1 if the target doesn't exist
	return -1;
}
