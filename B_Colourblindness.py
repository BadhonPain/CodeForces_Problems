t = int(input())   
for _ in range(t):
    n = int(input())
    s1 = input().strip()
    s2 = input().strip()

    is_yes = True  
    for i in range(n):
        if not ((s1[i] == s2[i]) or (s1[i] == 'G' and s2[i] == 'B') or (s1[i] == 'B' and s2[i] == 'G')):
            is_yes = False
            break

    if is_yes:
        print("YES")
    else:
        print("NO")
