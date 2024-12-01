def restaurant_customers(timings: list[list[int]]) -> int:
    # Frequency map to store the net changes at each time point
    event_changes = {}

    for arrival, departure in timings:
        event_changes[arrival] = event_changes.get(arrival, 0) + 1
        event_changes[departure + 1] = event_changes.get(departure + 1, 0) - 1

    # Sort events by time and calculate the maximum number of customers
    max_customers, current_customers = 0, 0
    for time, change in sorted(event_changes.items()):
        current_customers += change
        max_customers = max(max_customers, current_customers)

    return max_customers


def main():
    n = int(input("Enter number of timings: "))
    timings = [list(map(int, input().split())) for _ in range(n)]
    print("Maximum number of customers:", restaurant_customers(timings))


main()
