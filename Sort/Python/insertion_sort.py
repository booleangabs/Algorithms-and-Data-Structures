def insertionSort(array: list):
    for i in range(1, len(array)):
        j = i
        while (j > 0) & (array[j - 1] > array[j]):
            array[j], array[j - 1] = array[j - 1], array[j]
            j -= 1