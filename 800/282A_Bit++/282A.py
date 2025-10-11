n = int(input())

l = []
for num in range(n):
    x = input()
    l.append(x)

c = 0
for i in range(len(l)):
    if l[i].count('+') >= 1: c+=1
    if l[i].count('-') >= 1: c-=1

print(c)