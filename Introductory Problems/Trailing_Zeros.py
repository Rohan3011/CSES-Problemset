"""
Problem : https://cses.fi/problemset/task/1754
Author  : rohanop
Ref     : https://japlslounge.com/posts/cses/trailing_zeros/1.htm
"""


def trailing_zeros(n: int) -> int:
    count = 0
    curr = 5
    while (curr <= n):
        count += n//curr
        curr = curr * 5
    return count


def main():
    n = int(input())
    print(trailing_zeros(n))


if __name__ == '__main__':
    main()
