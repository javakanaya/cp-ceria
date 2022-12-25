def sockMerchant(n, ar):
    total = 0
    for i in set(ar):
        total += ar.count(i)//2
    return total

test_ar = [20, 20, 30, 20, 30]
print(sockMerchant(5, test_ar))