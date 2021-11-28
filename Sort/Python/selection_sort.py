def selectionSort(array: list):
    size = len(array)
    for i in range(size - 1):
        idx = i
        for j in range(i, size):
            if array[j] < array[idx]:
                idx = j
        if not idx == i:
            array[i], array[idx] = array[idx], array[i]