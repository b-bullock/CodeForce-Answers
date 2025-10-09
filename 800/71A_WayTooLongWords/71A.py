n = int(input())

l = []
for num in range(n):
    w = str(input())
    l.append(w)

for word in l:
    if len(word) <= 10: print(word)
    else: print(f'{word[0]}{len(word) - 2}{word[len(word) - 1]}')
