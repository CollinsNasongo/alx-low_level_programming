#!/usr/bin/python3
def mul(a, b):
    return a * b

def palindrome(n):
    s = str(n)
    i = 0
    x = len(s) - 1
    mid = len(s)//2
    while (i < mid):
        if s[i] == s[x]:
            i += 1
            x -= 1
            continue
        else:
            return (0)
    return (1)

def main():
    lst = []
    for i in range(999, 99, -1):
        for j in range (999, 99, -1):
            num = i * j
            if (palindrome(num) == 1):
                lst.append((num, i, j))
    max_num = max(lst)
    print("{:d} * {:d} = {:d}".format(max_num[1], max_num[2], max_num[0]))

main()
