def coin_piles(a: int, b: int) -> bool:
    if (a > b):
        a, b = b, a
    if (b > 2*a):
        return False
    return (a + b) % 3 == 0


def main():
    t = int(input().strip())
    for _ in range(0, t):
        a, b = map(int, input().strip().split())
        print("YES" if coin_piles(a, b) else "NO")


if __name__ == "__main__":
    main()

"""
Essentially, we can combine both piles to form pile N and
remove 3 each time from pile N until it gets empty.
But, a set of 3 coin should be 1 from pile A and 2 from pile B.
where `len(A) < len(B)`
"""
