//
// Created by Gabriel on 22/11/2021.
//
#include <iostream>
#include "binary_search.hpp"

using namespace std;

int main() {
    int first_example[] = {1, 2, 2, 2, 3, 4, 4, 5};
    int found_at;
    int length = sizeof first_example / sizeof first_example[0];

    found_at = binary_search(first_example, 3, length);
    if (found_at == -1)
        cout << "Couldn't find 3" << endl;
    else {
        cout << "Found 3 at " << found_at << endl;
        cout << "In position " << found_at << ", we have: " << first_example[found_at];
    }

    return 0;
}