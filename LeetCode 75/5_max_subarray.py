def maxSubarray(nums):
    m = nums[0]
    cur_sum = 0

    #remove negative prefix
    #kalau ketemu negatif, skip ke indek selanjutnya
    for n in nums:
        if cur_sum < 0:
            cur_sum = 0
        cur_sum += n
        m = max(m, cur_sum)

    return m

test_nums = [1, 2, 3, 4, -2, 32, 3, -23, -10, -100]
print(maxSubarray(test_nums))