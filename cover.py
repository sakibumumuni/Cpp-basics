n = int(input())
add = 0
for i in range(n):
    x, y =list(map(int, input().split()))
    m = x + y
    add = max(add, m)
    
    
print(add)

