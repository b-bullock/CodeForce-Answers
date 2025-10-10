n = int(input())

l = []
for num in range(n):
    i = input()
    l.append(i)

c = 0
for i in range(len(l)):
    l[i] = l[i].split() # split the list due to storing ints as string
    if l[i].count('1') >= 2: c+=1

print(c)