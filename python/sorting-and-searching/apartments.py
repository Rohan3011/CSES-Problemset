def allocate_apartments(desired_sizes: list[int], apartment_sizes: list[int], k: int):
    desired_sizes.sort()
    apartment_sizes.sort()

    i, j = 0, 0
    ans = 0

    while j < len(desired_sizes) and i < len(apartment_sizes):
        diff = apartment_sizes[i] - desired_sizes[j]
        if abs(diff) <= k:
            ans += 1
            j += 1
            i += 1

        elif diff < 0:
            i += 1

        else:
            j += 1
    return ans


def main():
    n, m, k = map(int, input().split())
    desired_sizes = list(map(int, input().split()))
    apartment_sizes = list(map(int, input().split()))
    print(allocate_apartments(desired_sizes, apartment_sizes, k))


main()
