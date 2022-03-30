using namespace std;

void insertionSort(int array[], int size) {
	for (int i = 0; i < size; i++) {
		int j = i;
		while ((j > 0) && (array[j - 1] > array[j])) {
			int aux = array[j];
			array[j] = array[j - 1];
			array[j - 1] = aux;
			j--;
		}
	}
}

void insertionSort(float array[], int size) {
	for (int i = 0; i < size; i++) {
		int j = i;
		while ((j > 0) && (array[j - 1] > array[j])) {
			float aux = array[j];
			array[j] = array[j - 1];
			array[j - 1] = aux;
			j--;
		}
	}
}

void insertionSort(double array[], int size) {
	for (int i = 0; i < size; i++) {
		int j = i;
		while ((j > 0) && (array[j - 1] > array[j])) {
			double aux = array[j];
			array[j] = array[j - 1];
			array[j - 1] = aux;
			j--;
		}
	}
}