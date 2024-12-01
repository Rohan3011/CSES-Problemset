t = int(input())
for _ in range(t):
    row, column = map(int, input().split())
    if row > column:
        if row % 2 == 0:
            print(row*row-column+1)
        else:
            row = row - 1
            print(row*row+column)
    else:
        if column % 2 == 1:
            print(column*column-row+1)
        else:
            column = column - 1
            print(column*column+row)
