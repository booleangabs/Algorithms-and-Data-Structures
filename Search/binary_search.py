def binary_search(array: list, value) -> int:
    sorted_array = list(sorted(array))
    index = -1
    min_, max_ = 0, len(array) - 1
    while min_ <= max_:
        current = int((min_ + max_) / 2)
        if sorted_array[current] == value:
            index = current
            break
        elif sorted_array[current] < value:
            min_ = current + 1
        else:
            max_ = current - 1
    return index
        