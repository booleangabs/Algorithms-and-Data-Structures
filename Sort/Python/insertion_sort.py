def insertionSort(array: list):
    for i in range(1, len(array)):
        current = array[i]
        idx = i - 1
        while (idx >= 0) & (current < array[idx]):
            array[idx + 1] = array[idx]
            idx -= 1
        array[idx + 1] = current