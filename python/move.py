s = input().strip()
bad = 0
moves = 0
for c in s:
    if c == ')':
        bad += 1
    else: 
        c == '('
    if bad > 0:
        moves += 1
        bad += 1
print(moves)
