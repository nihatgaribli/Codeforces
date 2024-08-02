s = input()
k = 'halo'
p = []

for i in s:
    if i not in p:
        p.append(i)
print(p)
for j in k:
    if j in p:
        print("YES")
        break
    else:
        print("NO")
        break