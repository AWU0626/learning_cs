#include <iostream>
#include <sys/wait.h>
#include "LinearSearch.h"

using namespace std;

int main() {
	cout << "hi" << endl;
	return 0;
}

int LinearSearch(int arr[], int size, int target) {
	for (int i = 0; i < size; i++) {
		// return index if the array if found
		if (arr[i] == target) return i;
	}

	// return -1 if the target doesn't exist
	return -1;
}
