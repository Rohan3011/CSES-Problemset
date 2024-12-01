s = input()
freq = []
for i in range(len(s)):
    if i > 0 and s[i] == s[i-1]:
        freq.append(freq[-1] + 1)
    else:
        freq.append(1)

print(max(freq))
