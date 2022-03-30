//
// Created by Gabriel on 22/11/2021.
//

int linear_search(int array[], int x, int length) {
    for (int i = 0; i < length; i++) {
        if (array[i] == x) {
            return i;
        }
    }
    return -1;
}

int linear_search(float array[], float x, int length) {
    for (int i = 0; i < length; i++) {
        if (array[i] == x) {
            return i;
        }
    }
    return -1;
}

int linear_search(double array[], double x, int length) {
    for (int i = 0; i < length; i++) {
        if (array[i] == x) {
            return i;
        }
    }
    return -1;
}