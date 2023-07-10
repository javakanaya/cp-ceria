def twoSum(nums, target):
    map = {} # value : index

    for i, n in enumerate(nums): #i = index, n = value in index
        diff = target - n
        if diff in map:
            return [map[diff], i]
        map[n] = i 


test_nums = [2,7,11,15]
test_target = 9

print(twoSum(test_nums, test_target))