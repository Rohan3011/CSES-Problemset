n = int(input())

if n != 2 and n != 3:
    even, odd = [], []
    for i in range(1, n+1):
        if i % 2 == 0:
            even.append(i)
        else:
            odd.append(i)
    print(*even, *odd)
else:
    print("NO SOLUTION")
