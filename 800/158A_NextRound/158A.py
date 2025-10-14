n, k = map(int, input().split())  # one line of input

s = list(map(int, input().split()))  # one line of input into a list

c = 0
for i in range(n):
    if s[i] >= s[k - 1] and s[i] > 0: c += 1  # (-1 on int k due to s list starting at 0)

print(c)