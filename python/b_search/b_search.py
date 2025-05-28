import math
def binary_search(nums: list[int], target: int) -> int:
    index = len(nums)-1

    if nums[0] == target:
        return 0

    if nums[index] == target:
        return index

    index = math.floor(index/2)

    if nums[math.floor(index/2)] == target:
        return index

    while True:
        index = index/2
        if nums[index] ==
    
    return -1
