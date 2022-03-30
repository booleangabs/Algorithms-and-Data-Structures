#include <iostream>
#include "bubble_sort.hpp"

using namespace std;

int main() {
	int array[] = {4, 6, 3, 2, 8, 5, 7, 1};
	int length = (sizeof array) / (sizeof array[0]);
	
	for (int i = 0; i < length; i++) {      
		std::cout << array[i] << " ";
	}
	
	std::cout << std::endl;
	
	bubbleSort(array, length);
					
	for (int i = 0; i < length; i++) {      
		std::cout << array[i] << " ";
	}
}