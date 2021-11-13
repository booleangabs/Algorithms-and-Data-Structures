def linear_search(array: list, value) -> int:
    index = -1
    for index_ in range(len(array)):
        if array[index_] == value:
            index = index_
    return index