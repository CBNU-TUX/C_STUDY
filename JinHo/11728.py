n, m = map(int, input().split())

a=[]
b=[]

a.append(input().split())
b.append(input().split())

c=[]

for i in range(n):
    c.append(int(a[0][i]))
for i in range(m):
    c.append(int(b[0][i]))

c.sort()

for i in c:
    print(i, end=" ")


