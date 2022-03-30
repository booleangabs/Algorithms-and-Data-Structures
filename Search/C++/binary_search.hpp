//
// Created by Gabriel on 22/11/2021.
//

int binary_search(int array[], int x, int length) {
    int index = -1;
    int min = 0;
    while (min <= length) {
        int temporary_index = (length + min) / 2;
        int current = array[temporary_index];
        if (current == x) {
            index = temporary_index;
            break;
        }
        if (current < x) min = temporary_index + 1;
        else min = temporary_index - 1;
    }
    return index;
}

int binary_search(float array[], float x, int length) {
    int index = -1;
    int min = 0;
    while (min <= length) {
        int temporary_index = (length + min) / 2;
        float current = array[temporary_index];
        if (current == x) {
            index = temporary_index;
            break;
        }
        if (current < x) min = temporary_index + 1;
        else min = temporary_index - 1;
    }
    return index;
}

int binary_search(double array[], double x, int length) {
    int index = -1;
    int min = 0;
    while (min <= length) {
        int temporary_index = (length + min) / 2;
        double current = array[temporary_index];
        if (current == x) {
            index = temporary_index;
            break;
        }
        if (current < x) min = temporary_index + 1;
        else min = temporary_index - 1;
    }
    return index;
}