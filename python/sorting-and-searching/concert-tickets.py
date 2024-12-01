import bisect


def concert_tickets(prices, max_prices):
    prices.sort()  # Sort the prices initially
    result = []
    for max_price in max_prices:
        # Find the index of the largest ticket price <= max_price
        idx = bisect.bisect_right(prices, max_price) - 1
        if idx == -1:
            result.append(-1)
        else:
            result.append(prices[idx])
            prices.pop(idx)  # Remove the ticket price
    return result


def main():
    n, m = map(int, input().split())
    prices = list(map(int, input().split()))
    max_prices = list(map(int, input().split()))
    result = concert_tickets(prices, max_prices)
    for x in result:
        print(x)


main()
