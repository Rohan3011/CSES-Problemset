n = int(input())
arr = list(map(int, input().split()))
cost = 0
for i in range(len(arr)):
    if i == 0 or arr[i] >= arr[i-1]:
        continue
    cost += arr[i-1] - arr[i]
    arr[i] = arr[i-1]
print(cost)
