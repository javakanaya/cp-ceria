
def digital_root(n):
    return n % 9 or 0 and 9

t = int(input())
while(t):
    n = int(input()) 
    print(digital_root(n))
    t -= 1
