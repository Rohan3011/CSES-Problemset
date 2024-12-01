def ferris_wheel(weights: list[int], max_weight: int):
    weights.sort()
    l, r = 0, len(weights) - 1
    ans = 0
    while l <= r:
        if weights[l] + weights[r] > max_weight:
            r -= 1
        else:
            l += 1
            r -= 1
        ans += 1
    return ans


def main():
    n, max_weight = map(int, input().split())
    weights = list(map(int, input().split()))
    print(ferris_wheel(weights, max_weight))


main()
