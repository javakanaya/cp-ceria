# similar with problem 1_two_sum
def containsDuplicate(nums):
    hashset = set() #instead using dict, in this problem using set()
    for i in nums:
        if i in hashset:
            return True
        hashset.add(i)
    return False

test_nums = [1, 2, 3, 4, 5, 4, 1, 5]
print(containsDuplicate(test_nums))