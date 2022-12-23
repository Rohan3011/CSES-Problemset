n = int(input())
nums = list(map(int, input().split()))

sum = n * (n + 1)//2

for x in nums:
    sum -= x
print(sum)
