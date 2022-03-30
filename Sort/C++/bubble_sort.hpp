using namespace std;

void bubbleSort(int array[], int size) {
	for (int i = 1; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (array[j] > array[j + 1]) {
				int aux = array[j];
				array[j] = array[j + 1];
				array[j + 1] = aux;
			}
		}
	}
}

void bubbleSort(float array[], int size) {
	for (int i = 1; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (array[j] > array[j + 1]) {
				float aux = array[j];
				array[j] = array[j + 1];
				array[j + 1] = aux;
			}
		}
	}
}

void bubbleSort(double array[], int size) {
	for (int i = 1; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (array[j] > array[j + 1]) {
				double aux = array[j];
				array[j] = array[j + 1];
				array[j + 1] = aux;
			}
		}
	}
}