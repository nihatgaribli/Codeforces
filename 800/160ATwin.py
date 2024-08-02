n = int(input())
k = sorted(list(map(int, input().split())), reverse=True)
cem = sum(k)
z = 0
t = 0
for i in k:
    z+=i
    t+=1
    if z > cem/2:
        print(t)
        break

