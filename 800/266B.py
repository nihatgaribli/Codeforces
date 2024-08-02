s = input()

for i in range(len(s)):
    for j in s:
        if i == 'B' and (i+1) == 'G':
            a = s.replace('B','G')
print(a) 