def bubbleSort(array: list):
    size = len(array)
    for i in range(1, size):
        for j in range(size - 1):
            if array[j] > array[j + 1]:
                array[j], array[j + 1] = array[j + 1], array[j]