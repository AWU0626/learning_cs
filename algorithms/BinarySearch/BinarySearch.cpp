#include <iostream>
#include <vector>
#include "BinarySearch.h"

using namespace std;

int main() {
	vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int target = 9;

	int result = BinarySearch(arr, target);

	cout << "Result on static arr: " << result << endl;
	return 0;
}

int BinarySearch(vector<int>& arr, int target) {
	
	return -1;
}
